section "l05_m8_000"{
    Background_Bg_GS2("BG_AR500_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Masaki＊＊｝!");
    Character_ChFace(0, 0, 11);
    Character_Chara_GS2(8, "M8_01F", 0);
    Music_PlayBGM(0, "MN_C_08_000_D03", 127, 40);
    Voice_PlayVoice("", 8, "L0408000_H00100");
    Message_Who(8);
    Message_MsgDisp("Masaki", "｛主人公｝.\nYou're early today.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Umm, here... It's chocolate!");
    if (Parameter_GetPl1Param(36) == 1){
        Character_ChFace(0, 0, 0);
        Voice_PlayVoice("FD_08_020_00000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Oh, thanks. There's no way...\nyou gave him this, right? ...\nAlright, you get a pass.");
        Character_Chara_GS2(8, "NON");
        Parameter_AddCh1Param(8, 61, 0);
        Parameter_AddCh1Param(8, 60, 6);
        Parameter_AddCh1Param(8, 62, 0);
        Parameter_InCh1Param(8, 555, 5);
        }
    else if (Parameter_GetPl1Param(37) == 1){
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("FD_08_020_00100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "...\nThis is spending too much money on\nobligatory chocolate.\nWell, thanks.\nI'm expecting good news.");
        Character_Chara_GS2(8, "NON");
        Parameter_AddCh1Param(8, 61, 3);
        Parameter_AddCh1Param(8, 60, 10);
        Parameter_AddCh1Param(8, 62, #1);
        Parameter_InCh1Param(8, 555, 4);
        }
    else if (Parameter_GetPl1Param(39) >= 1){
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("FD_08_020_00200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Did you make this from leftover\nchocolate?\nHaha, I'm kidding!\nThis will blow him away.");
        Character_Chara_GS2(8, "NON");
        Parameter_AddCh1Param(8, 61, 6);
        Parameter_AddCh1Param(8, 60, 10);
        Parameter_AddCh1Param(8, 62, #3);
        Parameter_InCh1Param(8, 555, Parameter_GetPl1Param(39));
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(8, 86, 1);
    }
