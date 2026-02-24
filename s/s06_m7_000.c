section "s06_m7_000"{
    Background_Bg_GS2("BG_HO100_?_0", 1, #1, 0);
    System_Wait(10);
    Screen_WipeIn(2);
    SoundEffect_PlayStream(3, "SS_T_00_038_M00");
    System_Wait(120);
    SoundEffect_PlayStream(3, "SEQ_SE_EV_138");
    if (Parameter_GetCh1Param(7, 130) <= 2){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(7, "M7_06F", 0);
        Voice_PlayVoice("S0607000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Happy New Year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Happy New Year,\n｛Wakaouji＊＊｝!");
        if (Parameter_ChkPlayer(16) == 1){
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(7, 2, (#1));
            Voice_PlayVoice("S0607000_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "That is a rather long-sleeved\nkimono...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yep, I did my best!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(7, 2, (#1));
            Voice_PlayVoice("S0607000_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Good.\nIt seems appropriate for the New\nYear holiday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He seemed to like it. Great!)");
            }
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("S0607000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Well, shall we go?");
        }
    else if (Parameter_GetCh1Param(7, 130) == 3){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(7, "M7_06F", 0);
        Voice_PlayVoice("S0607000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Hello! Happy New Year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Happy New Year,\n｛Wakaouji＊＊｝.");
        if (Parameter_ChkPlayer(16) == 1){
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(7, 2, (#1));
            Voice_PlayVoice("S0607000_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Ah, that is a rather long-sleeved\nkimono.\nDid you put it on by yourself?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, I was rather enthusiastic!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(7, 2, (#1));
            Voice_PlayVoice("S0607000_G00600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Good, it is New Year-ish.\nA remarkable difference.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Great!\n｛Wakaouji＊＊｝ liked it!)");
            }
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("S0607000_G00700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "... Well. Thank you for waiting.\nLet's go then.");
        }
    else {
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Character_Chara_GS2(7, "M7_06F", 0);
        Voice_PlayVoice("", 7, "S0607000_G00800");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.\nHappy New Year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Happy New Year,\n｛Wakaouji＊＊｝.\nMy best regards this year.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(7, 2, (#1));
        Voice_PlayVoice("S0607000_G00900", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It is I who should say so.\nMy best regards this year.");
        if (Parameter_ChkPlayer(16) == 1){
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("S0607000_G01000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "............");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝...?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S0607000_G01100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I'm sorry.\nI am fascinated by the way you look.\nYou have a fine figure in that\nkimono.");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Giggles* I did my best!\nDoes it suit me?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S0607000_G01200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes, it is lovely.\nIt suits you very much.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Great!\n｛Wakaouji＊＊｝ likes it!)");
            }
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("S0607000_G01300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Well then, let's go.");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    if (Parameter_ChkPlayer(16) == 1){
        Parameter_AddCh1Param(7, 61, 10);
        Parameter_AddCh1Param(7, 60, 6);
        Parameter_AddCh1Param(7, 62, #10);
        }
    }
