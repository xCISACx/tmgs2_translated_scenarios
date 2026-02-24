section "s06_m6_000"{
    Background_Bg_GS2("BG_HO100_?_0", 1, #1, 0);
    System_Wait(10);
    Screen_WipeIn(2);
    SoundEffect_PlayStream(3, "SS_T_00_038_M00");
    System_Wait(120);
    SoundEffect_PlayStream(3, "SEQ_SE_EV_138");
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(6, "M6_??F", 0);
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Voice_PlayVoice("S0606000_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Happy New Year.\nPlease treat me well this year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I should be saying that!");
        if (Parameter_ChkPlayer(16) == 1){
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(6, 3, (#1));
            Voice_PlayVoice("S0606000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Wah! A gorgeous kimono.\nIt seems like New Year's Day now.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Great! He seemed pleased.)");
            }
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("S0606000_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Well then, shall we go?");
        }
    else if (Parameter_GetCh1Param(6, 130) == 3){
        Voice_PlayVoice("", 6, "S0606000_F00300");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.\nAre you ready?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes. Happy New Year!");
        Character_BlinkStart(6, 2, (#1));
        Voice_PlayVoice("S0606000_F00400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Happy New Year!");
        if (Parameter_ChkPlayer(16) == 1){
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(6, 2, (#1));
            Voice_PlayVoice("S0606000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Heh... A kimono?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes. How is it?");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S0606000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's really beautiful.\nAnyone can look good with the right\nclothes.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(6, 2, (#1));
            Voice_PlayVoice("S0606000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ahaha, it's a joke!\nBut if you don't take care of it,\nit'll get really dirty.\nTry really hard to keep it\nbeautiful!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He was pleased. Good!)");
            }
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("S0606000_F00800", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Well then, let's go.");
        }
    else {
        Voice_PlayVoice("", 6, "S0606000_F00900");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.\nAre you ready?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes. Happy New Year!");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("S0606000_F01000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Yeah, Happy New Year.\nPlease treat me well this year.");
        if (Parameter_ChkPlayer(16) == 1){
            Character_ChFace(0, 0, 11);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S0606000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah... A kimono...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Is it strange?");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("S0606000_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "...\nIt feels like it suits you a little\ntoo much...\nHow would a boyfriend feel...");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝?");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 0);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S0606000_F01300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "No, it's nothing!\nIt suits you, Senpai.\nIt's very tailor-made!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He liked it... I think?)");
            }
        Character_ChFace(0, 0, 0);
        Voice_PlayVoice("S0606000_F01400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Well, let's go!");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    if (Parameter_ChkPlayer(16) == 1){
        Parameter_AddCh1Param(6, 61, 10);
        Parameter_AddCh1Param(6, 60, 6);
        Parameter_AddCh1Param(6, 62, #10);
        }
    }
