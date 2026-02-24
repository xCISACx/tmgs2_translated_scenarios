section "p61_pl_000"{
    if (Parameter_GetPl1Param(338) <= 2){
        System_Call_GS2("P61", "G4", 0);
        }
    else {
        System_Call_GS2("P30", "PL", 0);
        }
    }
