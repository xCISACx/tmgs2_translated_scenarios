section "s02_pl_000"{
    int var0 = 1;
    int var1 = 0;
    Message_Who(0);
    Message_MsgDisp("主人公", "Well, today is the visit to the\nshrine for New Year's Day.");
    while (var0 <= 8){
        if ((Parameter_GetCh1Param(var0, 515) == 1 && System_GlobalWork(0, 1) != var0)){
            var1 = 1;
            var0 = 8 + 1;
            }
        var0 = var0 + 1;
        }
    if (var1 == 0){
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        System_Call_GS2("S05", "S1", 0);
        }
    else if (var1 != 0){
        Message_MsgSel("Invite a boy", "Go alone");
        switch (Message_TextSelect()){
            case 0:
            Message_Who(0);
            Message_MsgDisp("主人公", "Who will I invite...?");
            Message_Sele_Man(6, System_GlobalWork(0, 1));
            var0 = Message_Sele_Man_Result();
            if (var0 == 1){
                SoundEffect_TelPush(0);
                System_Call_GS2("S03", "M1", 0);
                }
            else if (var0 == 2){
                SoundEffect_TelPush(1);
                System_Call_GS2("S03", "M2", 0);
                }
            else if (var0 == 3){
                SoundEffect_TelPush(2);
                System_Call_GS2("S03", "M3", 0);
                }
            else if (var0 == 4){
                SoundEffect_TelPush(3);
                System_Call_GS2("S03", "M4", 0);
                }
            else if (var0 == 5){
                SoundEffect_TelPush(4);
                System_Call_GS2("S03", "M5", 0);
                }
            else if (var0 == 6){
                SoundEffect_TelPush(5);
                System_Call_GS2("S03", "M6", 0);
                }
            break ;
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "I'll go alone, after all.");
            System_Call_GS2("S05", "S1", 0);
            break ;
            }
        }
    if (System_GlobalWork(6, 1) == 1){
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        System_Call_GS2("S05", "S1", 0);
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
