section "l05_m1_000"{
    Background_Bg_GS2("BG_SC500_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(338) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "(It doesn't look like\n｛Saeki＊＊｝ is here...)");
        Parameter_InCh1Param(1, 555, 4);
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Saeki＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(1, "M1_01F", 0);
        Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
        Voice_PlayVoice("", 1, "L0401000_A00100");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝. H-Hey!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Here. It's Valentine's chocolate.");
        if (Parameter_GetPl1Param(36) == 1){
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("FD_01_020_00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hey, you...\nIt's not a crime to consider the\nother person's feelings, right?");
            Character_Chara_GS2(1, "NON");
            Parameter_AddCh1Param(1, 61, 0);
            Parameter_AddCh1Param(1, 60, 6);
            Parameter_AddCh1Param(1, 62, 0);
            Parameter_InCh1Param(1, 555, 5);
            }
        else if (Parameter_GetPl1Param(37) == 1){
            Character_ChFace(0, 0, 0);
            Voice_PlayVoice("FD_01_020_00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hey, this looks expensive...\nIt's not some sick joke where you've\nmistaken me for the person you like,\nright?");
            Character_Chara_GS2(1, "NON");
            Parameter_AddCh1Param(1, 61, 3);
            Parameter_AddCh1Param(1, 60, 10);
            Parameter_AddCh1Param(1, 62, #1);
            Parameter_InCh1Param(1, 555, 4);
            }
        else if (Parameter_GetPl1Param(39) >= 1){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("FD_01_020_00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Oh, handmade.\nMeaning that I'm sharing it with\nhim.\nIt's fine.\nI'll sample it, from a professional\npoint of view.");
            Character_Chara_GS2(1, "NON");
            Parameter_AddCh1Param(1, 61, 6);
            Parameter_AddCh1Param(1, 60, 10);
            Parameter_AddCh1Param(1, 62, #3);
            Parameter_InCh1Param(1, 555, Parameter_GetPl1Param(39));
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
