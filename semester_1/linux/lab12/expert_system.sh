#! /bin/bash

echo "Enter your symptoms"
read symptoms

if [ "$symptoms" == "fever" ]
then
    echo "Take fever reducer medication"
elif [ "$symptoms" == "sore throat" ]
then
    echo "Do gargling with warm saltwater"
elif [ "$symptoms" == "cough and congestion" ]
then
    echo "Drink warm fluids and take cough syrup"
else
    echo "I would recommend you to rest as i don't have enough information"
fi