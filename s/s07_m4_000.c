section "s07_m4_000"{
    Character_ChFace(0, 2, 2);
    Character_ChFace(0, 3, 1);
    Character_Chara_GS2(4, "M4_??F", 0);
    Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_EX_140_000", 127, 40);
    if (Parameter_GetCh1Param(4, 130) <= 2){
        Voice_PlayVoice("S0704000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Wow～...\nAs I thought, it's packed with\npeople...");
        Message_Who(0);
        Message_MsgDisp("主人公", "I'm still taking it all in.");
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(4, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("S0704000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "...\nI think this will be nice grounds\nfor a live.");
        Character_BlinkStart(4, 3, (#1));
        Voice_PlayVoice("S0704000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "A full live house...\nA very full live house...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Hariya＊＊｝'s getting\npale.\nI wonder if he's alright?)");
        }
    else if (Parameter_GetCh1Param(4, 130) == 3){
        Voice_PlayVoice("S0704000_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "This is seriously an incredible\ncrowd.\nIt's all over the place.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hariya＊＊｝ has a loud\nvoice...");
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("S0704000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Well, I'm also in the same hole\nas...\nUjina? Unaji? Whoever the guy is.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(...\nIt's Mujina,\n｛Hariya＊＊｝...)");
        }
    else {
        Voice_PlayVoice("S0704000_D00500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Seriously?\nIt's incredibly crowded...\nAre you okay?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, I'm fine.");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("S0704000_D00600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... You might wanna hang onto me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?");
        Character_BlinkStart(4, 0, (#1));
        Voice_PlayVoice("S0704000_D00700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "My arm! Hang onto it for now.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay, thank you.");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
