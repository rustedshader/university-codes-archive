import random

import pandas as pd


def eucledian_distance(x1, x2, y1, y2):
    return (((x2 - x1) ** 2) + ((y2 - y1) ** 2)) ** 0.5


def average_centroid(cluster_dict):
    new_cluster_dict = {}
    for key, val in cluster_dict.items():
        if not val:
            new_cluster_dict[key] = []
            continue
        x_vals = [a for a, _ in val]
        y_vals = [b for _, b in val]
        avg_x = sum(x_vals) / len(x_vals)
        avg_y = sum(y_vals) / len(y_vals)
        new_cluster_dict[(avg_x, avg_y)] = val
    return new_cluster_dict


def solve():
    df = pd.read_excel("cluster_data.xlsx")
    # We have 3 cluster
    K = 3

    random_data_points = df.values.tolist()

    # We then randomly generate the random points
    # random_data_points = [
    #    (random.randint(1, 100), random.randint(1, 100)) for _ in range(100)
    # ]

    # Now we randomly generate centroid points
    random_centroid_points = [
        (random.randint(0, 50), random.randint(0, 50)) for _ in range(K)
    ]

    cluster_dict = {}

    for val in random_centroid_points:
        if val not in cluster_dict:
            cluster_dict[val] = []

    print("Keys are", list(cluster_dict))

    for _ in range(100):
        for key in cluster_dict.keys():
            cluster_dict[key] = []

        for x, y in random_data_points:
            min_eucledian_distance_k = float("inf")
            min_k = None
            for x_c, y_c in cluster_dict.keys():
                distance = eucledian_distance(x, x_c, y, y_c)
                if distance < min_eucledian_distance_k:
                    min_k = (x_c, y_c)
                    min_eucledian_distance_k = distance

            if min_k not in cluster_dict:
                cluster_dict[min_k] = [(x, y)]
            else:
                cluster_dict[min_k].append((x, y))

        # Now we have assigned all the points to their nearest centroids
        # Now we will calculate our new centroid :)))

        cluster_dict = average_centroid(cluster_dict)
    return cluster_dict.keys()


if __name__ == "__main__":
    # print(eucledian_distance(3,1,2,3,4,5))
    print("Final Centroids are:", solve())
