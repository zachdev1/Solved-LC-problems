int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target){
    int employees = 0; 
    for(int i = 0; i < hoursSize; i++){
        if (hours[i] >= target){
            employees++; 
        }
    }
    return employees; 
}