section "l05_m6_000"{
    Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝!");
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(6, "M6_01F", 0);
    Music_PlayBGM(0, "MN_C_06_000_D00", 127, 40);
    Voice_PlayVoice("L0406000_F00100", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "Hello. What's up?");
    Message_Who(0);
    Message_MsgDisp("主人公", "It's Valentine's Day today!\nHere, it's chocolate.");
    if (Parameter_GetPl1Param(36) == 1){
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(6, 3, (#1));
        Voice_PlayVoice("FD_06_020_00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "...\nSenpai, there's no way you gave the\nguy you like this, right?\n*Sigh* I'm worried...");
        Character_Chara_GS2(6, "NON");
        Parameter_AddCh1Param(6, 61, 0);
        Parameter_AddCh1Param(6, 60, 6);
        Parameter_AddCh1Param(6, 62, 0);
        Parameter_InCh1Param(6, 555, 5);
        }
    else if (Parameter_GetPl1Param(37) == 1){
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("FD_06_020_00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Well, you could also give this to\nhim, maybe.\nThanks for the chocolate, Senpai.");
        Character_Chara_GS2(6, "NON");
        Parameter_AddCh1Param(6, 61, 3);
        Parameter_AddCh1Param(6, 60, 10);
        Parameter_AddCh1Param(6, 62, #1);
        Parameter_InCh1Param(6, 555, 4);
        }
    else if (Parameter_GetPl1Param(39) >= 1){
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("FD_06_020_00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Are you doing a test run on me? ...\nYeah, you pass!\nShouldn't you be confident?");
        Character_Chara_GS2(6, "NON");
        Parameter_AddCh1Param(6, 61, 6);
        Parameter_AddCh1Param(6, 60, 10);
        Parameter_AddCh1Param(6, 62, #3);
        Parameter_InCh1Param(6, 555, Parameter_GetPl1Param(39));
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
