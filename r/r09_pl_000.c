section "r09_pl_000"{
    if (System_GlobalWork(3, 1) == 1){
        System_Call_GS2("B05", "M1", 3);
        }
    else if (System_GlobalWork(3, 1) == 2){
        System_Call_GS2("R09", "M2", 0);
        }
    else if (System_GlobalWork(3, 1) == 3){
        System_Call_GS2("R09", "M3", 0);
        }
    else if (System_GlobalWork(3, 1) == 4){
        System_Call_GS2("R09", "M4", 0);
        }
    else if (System_GlobalWork(3, 1) == 5){
        System_Call_GS2("R09", "M5", 0);
        }
    else if (System_GlobalWork(3, 1) == 6){
        System_Call_GS2("R09", "M6", 0);
        }
    else if ((System_GlobalWork(3, 1) == 7) && (Parameter_GetCh1Param(7, 538) == 1)){
        System_Call_GS2("D02", "M7", 0);
        }
    else {
        System_Call_GS2("R09", "M7", 0);
        }
    System_GlobalWork(3, 0, 0);
    }
