section "q01_pl_002"{
    int var0;
    int var1;
    int var2 = 0;
    int var3 = 0;
    int var4 = 0;
    int var5 = 0;
    int var6 = 0;
    System_GlobalWork(0, 0, 0);
    System_GlobalWork(1, 0, 0);
    System_GlobalWork(2, 0, 0);
    System_GlobalWork(3, 0, 0);
    var6 = System_GlobalWork(23, 1);
    if (var6 == #1){
        var6 = 0;
        }
    var1 = Parameter_ExtChar(1, 6, 3, 1, 6, 8, var6);
    switch (var1){
        case 0:
        break ;
        case 1:
        System_GlobalWork(1, 2, 1);
        System_Call_GS2("Q11", "M1", 0);
        break ;
        case 2:
        System_GlobalWork(1, 2, 2);
        System_Call_GS2("Q11", "M2", 0);
        break ;
        case 3:
        System_GlobalWork(1, 2, 3);
        System_Call_GS2("Q11", "M3", 0);
        break ;
        case 4:
        System_GlobalWork(1, 2, 4);
        System_Call_GS2("Q11", "M4", 0);
        break ;
        case 5:
        System_GlobalWork(1, 2, 5);
        System_Call_GS2("Q11", "M5", 0);
        break ;
        case 7:
        System_GlobalWork(1, 2, 7);
        System_Call_GS2("Q11", "M7", 0);
        break ;
        }
    if (System_GlobalWork(0, 1) == 0){
        System_Call_GS2("Q12", "PL", 0);
        }
    if (System_GlobalWork(0, 1) == 0){
        var0 = Parameter_ExtChar(3, 6, 3, 1);
        switch (var0){
            case 10:
            System_Call_GS2("Q14", "G1", 0);
            break ;
            case 11:
            System_Call_GS2("Q14", "G2", 0);
            break ;
            case 12:
            System_Call_GS2("Q14", "G3", 0);
            break ;
            case 13:
            System_Call_GS2("Q14", "G4", 0);
            break ;
            }
        }
    if (System_GlobalWork(0, 1) == 0){
        var1 = System_GlobalWork(23, 1);
        if (var1 == #1){
            var1 = 0;
            }
        var6 = Parameter_ExtChar(1, 6, 3, 1);
        if ((var6 == 6 || var6 == 8)){
            var1 = 0;
            }
        switch (var1){
            case 0:
            System_Call_GS2("Q15", "PL", 0);
            System_Call_GS2("Q16", "PL", 0);
            System_Call_GS2("Q17", "PL", 0);
            break ;
            case 1:
            System_GlobalWork(1, 2, 1);
            System_Call_GS2("Q15", "M1", 0);
            break ;
            case 2:
            System_GlobalWork(1, 2, 2);
            System_Call_GS2("Q15", "M2", 0);
            break ;
            case 3:
            System_GlobalWork(1, 2, 3);
            System_Call_GS2("Q15", "M3", 0);
            break ;
            case 4:
            System_GlobalWork(1, 2, 4);
            System_Call_GS2("Q15", "M4", 0);
            break ;
            case 5:
            System_GlobalWork(1, 2, 5);
            System_Call_GS2("Q15", "M5", 0);
            break ;
            case 7:
            System_GlobalWork(1, 2, 7);
            System_Call_GS2("Q15", "M7", 0);
            break ;
            }
        }
    }
