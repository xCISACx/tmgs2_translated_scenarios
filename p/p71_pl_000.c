section "p71_pl_000"{
    if (Parameter_GetPl1Param(338) <= 2){
        System_Call_GS2("P71", "PL", 1);
        }
    else {
        System_Call_GS2("P30", "PL", 0);
        }
    }
