section "h18_m2_000"{
    if (Parameter_GetCh1Param(2, 25) != 1){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_01F", 0);
        Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(2, 130) <= 3){
            Voice_PlayVoice("H1802000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I came here to support the team.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, you also came to support the\nteam, ｛Shiba＊＊｝.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H1802000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nI wanted to come to the national\nchampionships at least once.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hmm, is that so...\nPlease cheer for us,\n｛Shiba＊＊｝.");
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1802000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.");
            }
        else {
            Voice_PlayVoice("", 2, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝!\nYou came here to support us.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H1802000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah. You also look pumped.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!\nThis is do or die for the Baseball\nClub!");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("H1802000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Right.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... ｛Shiba＊＊｝?");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("H1802000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It'd be nice if the Baseball Club\nwon.\nI'll see you later.");
            Character_Chara_GS2(2, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Shiba＊＊｝ looked a\nlittle sad...)");
            }
        }
    else {
        if (Parameter_GetCh1Param(2, 130) <= 3){
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_15F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H1802000_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... We're finally here.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I'm somewhat nervous.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1802000_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nWhat will I do if you're nervous?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Right...");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 2, 5);
            Voice_PlayVoice("H1802000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I get what you mean, though.\nLet's give it our best shot.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yeah!\nGood luck, ｛Shiba＊＊｝!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H1802000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'll support them so that they'll\nwin...!)");
            }
        else {
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_15F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H1802000_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nI'm finally at the place I've been\naiming for.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...!");
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(2, 2, (#1));
            Voice_PlayVoice("H1802000_B01100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I'll definitely win.\nI'll win, to make you...");
            Message_Who(0);
            Message_MsgDisp("主人公", "To make me...?");
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H1802000_B01200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", ".........");
            Character_ChFace(0, 0, 6);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1802000_B01300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Nothing.\nI'm relying on your support from the\nbench.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay!\nGood luck, ｛Shiba＊＊｝!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'll support them so that they'll\nwin...!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
