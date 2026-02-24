section "v00_m2_000"{
    int var0 = 0;
    Screen_WipeIn(2);
    Parameter_AddPl1Param(350, #1);
    Parameter_AddPl1Param(350, 1);
    while (var0 < 619){
        Voice_PlayVoice("", 2, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "｛主人公｝");
        Parameter_AddPl1Param(350, 1);
        var0 = var0 + 1;
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    }
