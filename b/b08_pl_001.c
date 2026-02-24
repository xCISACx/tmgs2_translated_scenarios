section "b08_pl_001"{
    int var0;
    var0 = Parameter_ExtChar(1, 4, #1, 1, 1);
    switch (var0){
        case 2:
        System_Call_GS2("B08", "M2", 1);
        break ;
        case 3:
        System_Call_GS2("B08", "M3", 1);
        break ;
        case 4:
        System_Call_GS2("B08", "M4", 1);
        break ;
        case 5:
        System_Call_GS2("B08", "M5", 1);
        break ;
        case 6:
        System_Call_GS2("B08", "M6", 1);
        break ;
        }
    }
