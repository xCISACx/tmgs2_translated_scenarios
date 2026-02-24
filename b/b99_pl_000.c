section "b99_pl_000"{
    int var0;
    int var1;
    int var2;
    if ((System_GlobalWork(23, 1) == 0 && Parameter_DayCompare(2007, 5, 1) >= 1 && Date_NightDate(1, 0) == 0)){
        var0 = Parameter_GetPl1Param(312);
        if (var0 == 7){
            var2 = 2;
            var1 = Parameter_GetCh1Param(var0, 64) - System_GlobalWork(24, 1);
            }
        else if (var0 == 8){
            var2 = 5;
            var1 = Parameter_GetCh1Param(var0, 64);
            }
        else if (var0 != 0){
            var2 = 6;
            var1 = Parameter_GetCh1Param(var0, 64);
            }
        if ((var0 != 0 && var0 != 1 && Parameter_GetCh1Param(var0, 130) >= 3 && var1 >= var2)){
            if (Parameter_GetCh1Param(var0, 230) != 0){
                System_GlobalWork(0, 0, 1);
                }
            }
        }
    }
