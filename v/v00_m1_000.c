section "v00_m1_000"{
    int var0 = 0;
    Screen_WipeIn(2);
    Parameter_AddPl1Param(351, #1);
    Parameter_AddPl1Param(351, 1);
    while (var0 < 718){
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝");
        Parameter_AddPl1Param(351, 1);
        var0 = var0 + 1;
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    }
