section "k01_m6_001"{
    Character_BlinkStart(6, 1, (#1), 1);
    Character_BlinkStart(6, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "I wonder if ｛Amachi＊＊｝ is\nhere....\nThere he is!");
        Music_PlayBGM(0, "MN_C_06_004_D00", 127, 40);
        Character_Chara_GS2(6, "M6_01F", 0);
        Voice_PlayVoice("", 6, "K0106000_F00000");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.\nDo you need something from me?");
        Message_Who(0);
        Message_MsgDisp("主人公", "It's your birthday today, right\n｛Amachi＊＊｝?\nHere, it's a present!");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("K0106000_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "For me!? Thank you very much!");
        Voice_PlayVoice("K0106000_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I wonder what it is exactly...?\nIs it okay for me to open it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, of course!");
        }
    else if (Parameter_GetCh1Param(6, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "I wonder if ｛Amachi＊＊｝ is\nhere....\nThere he is!");
        Music_PlayBGM(0, "MN_C_06_004_D00", 127, 40);
        Character_Chara_GS2(6, "M6_01F", 0);
        Voice_PlayVoice("", 6, "K0106000_F00300");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝. What's up?");
        Message_Who(0);
        Message_MsgDisp("主人公", "It's your birthday today, right\n｛Amachi＊＊｝?\nHere, it's a present!");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("K0106000_F00400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Ah, thanks! Hey, can I open it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, of course!");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "I wonder if ｛Amachi＊＊｝ is\nhere....\nThere he is!");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Amachi＊＊｝!");
        Music_PlayBGM(0, "MN_C_06_004_D00", 127, 40);
        Character_Chara_GS2(6, "M6_01F", 0);
        Character_ChFace(0, 0, 6);
        Voice_PlayVoice("", 6, "K0106000_F00500");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝. Umm...\nwhat is the matter?");
        Message_Who(0);
        Message_MsgDisp("主人公", "It's your birthday today, right\n｛Amachi＊＊｝?\nHere, it's a present!");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("K0106000_F00600", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Ah, thanks! I'm glad you remembered!\n... Can I open it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, of course! Open it!");
        }
    if (Parameter_GetCh1Param(6, 67) == 1){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("K0106000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Whoa... Thank you very much!\nI will treasure it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay, it looks like he's really\nhappy!)");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("K0106000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, I wanted this! Thanks!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay, it looks like he's really\nhappy!)");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 4){
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("K0106000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah, this is really nice!\nI like it! Thanks! I'll treasure it!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay, it looks like he's really\nhappy!)");
            }
        Parameter_AddCh1Param(6, 61, 3);
        Parameter_AddCh1Param(6, 60, 2);
        Parameter_AddCh1Param(6, 62, #3);
        }
    else if (Parameter_GetCh1Param(6, 67) == 2){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("K0106000_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "This is an amazing present.\nI gratefully accept this.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, it looks like he's relatively\nhappy.)");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("K0106000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, you've got some good sense.\nThanks!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, it looks like he's relatively\nhappy.)");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 4){
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("K0106000_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah, this is quite nice! Thanks!\nI'll treasure it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, it looks like he's relatively\nhappy.)");
            }
        Parameter_AddCh1Param(6, 61, 1);
        Parameter_AddCh1Param(6, 60, 0);
        Parameter_AddCh1Param(6, 62, #1);
        }
    else if (Parameter_GetCh1Param(6, 67) == 3){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("K0106000_F01300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Uhh, umm... I will accept this.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, it looks like he's not that\nhappy about it...)");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("K0106000_F01400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Whoa, what is this?\nWell, I'll accept it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, it looks like he's not that\nhappy about it...)");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 4){
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("K0106000_F01500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "............ Uhh, thanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, it looks like he's not that\nhappy about it...)");
            }
        Parameter_AddCh1Param(6, 61, #1);
        Parameter_AddCh1Param(6, 60, #2);
        Parameter_AddCh1Param(6, 62, 2);
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    if (Parameter_ChkSpEvent("D01", "M6", 2) == 1){
        System_Call_GS2("D01", "M6", 2);
        }
    }
