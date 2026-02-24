section "x01_pl_000"{
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    int var0;
    int var1;
    if (Parameter_ChkPlayer(7) == 1){
        if (Parameter_ChkPlayer(8, 1) != 6){
            var0 = Parameter_ExtChar(1, 6, 3, 1, 8);
            switch (var0){
                case 0:
                break ;
                case 1:
                System_Call_GS2("X01", "M1", 0);
                break ;
                case 2:
                System_Call_GS2("X01", "M2", 0);
                break ;
                case 3:
                System_Call_GS2("X01", "M3", 0);
                break ;
                case 4:
                System_Call_GS2("X01", "M4", 0);
                break ;
                case 5:
                System_Call_GS2("X01", "M5", 0);
                break ;
                case 6:
                System_Call_GS2("X01", "M6", 0);
                break ;
                case 7:
                System_Call_GS2("X01", "M7", 0);
                break ;
                }
            }
        else {
            var1 = Parameter_ExtChar(3, 6, 3, 1, 0);
            switch (var1){
                case 10:
                System_Call_GS2("X02", "G1", 0);
                break ;
                case 11:
                System_Call_GS2("X02", "G2", 0);
                break ;
                case 12:
                System_Call_GS2("X02", "G3", 0);
                break ;
                case 13:
                System_Call_GS2("X02", "G4", 0);
                break ;
                }
            }
        }
    else if (Parameter_ChkPlayer(7) == 0){
        var1 = Parameter_ExtChar(3, 6, 3, 1, 0);
        switch (var1){
            case 10:
            System_Call_GS2("X02", "G1", 0);
            break ;
            case 11:
            System_Call_GS2("X02", "G2", 0);
            break ;
            case 12:
            System_Call_GS2("X02", "G3", 0);
            break ;
            case 13:
            System_Call_GS2("X02", "G4", 0);
            break ;
            }
        }
    }
