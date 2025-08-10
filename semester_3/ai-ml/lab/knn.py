# KNN - K Nearest Neighbours
import pandas as pd


def eucledian_distance(x1,x2,y1,y2,z1,z2):
    return (((x2-x1) ** 2)  + ((y2-y1) ** 2) + ((z2-z1) ** 2)) ** 0.5

def knn():
    file = 'height_weight_class_data.xlsx'
    K = 3
    df = pd.read_excel(file)
    data_dic = {}
    data_dic["height"] = []
    data_dic["weight"] = []
    to_predict_data = {"height": 170 , "weight": 57}
    for idx,val in enumerate(df["Height (CM)"]):
        data_dic["height"].append(val)
    for idx,val in enumerate(df["Weight (KG)"]):
        data_dic["weight"].append(val)

    distance_values = {}

    for i in range(len(data_dic["height"])):
        distance_values[i] = eucledian_distance(x1=data_dic["height"][i],x2=to_predict_data["height"],y1=data_dic["weight"][i],y2=to_predict_data["weight"],z1=0,z2=0)

    sorted_distance_values = {k: v for k,v in sorted(distance_values.items(),key=lambda item: item[1])}

    class_counter = {}

    for idx in list(sorted_distance_values)[:K]:
        if df["Class"][idx] not in class_counter:
            class_counter[df["Class"][idx]] = 1
        else:
            class_counter[df["Class"][idx]] += 1

    sorted_class_counter = {k: v for k,v in sorted(class_counter.items(),key=lambda item: item[1])}

    print("After KNN The predicted Class Would be:",list(sorted_class_counter)[-1])



if __name__ == '__main__':
    knn()
