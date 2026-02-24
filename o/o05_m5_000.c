section "o05_m5_000"{
    int var0 = 0;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(5, "M5_08F", 0);
        Voice_PlayVoice("Y0505000_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "1st place is amazing～!");
        }
    else if (var0 <= 3){
        Character_ChFace(0, 0, 9);
        Character_Chara_GS2(5, "M5_08F", 0);
        Voice_PlayVoice("Y0505000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "So close...");
        }
    else {
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(5, 3, (#1));
        Character_Chara_GS2(5, "M5_08F", 0);
        Voice_PlayVoice("Y0505000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Last place... It's painful.");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    }
