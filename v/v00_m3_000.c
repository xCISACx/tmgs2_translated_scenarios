section "v00_m3_000"{
    int var0 = 0;
    Screen_WipeIn(2);
    Parameter_AddPl1Param(350, #1);
    Parameter_AddPl1Param(350, 1);
    while (var0 < 619){
        Voice_PlayVoice("", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝");
        Parameter_AddPl1Param(350, 1);
        var0 = var0 + 1;
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    }
