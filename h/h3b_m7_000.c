section "h3b_m7_000"{
    Background_Bg_GS2("BG_SC700_SU_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Alright, summer training camp starts\ntoday.\nI'll do my best～!");
    if (Parameter_GetCh1Param(7, 130) <= 2){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_08F", 0);
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝.\nI am in your favor this week.");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H3B07000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Ah, you're fired up.\nThis is promising.\nMaybe I should leave the job of the\ntrainer to you, too.");
        Message_Who(0);
        Message_MsgDisp("主人公", "That is your job.\nPlease give us guidance,\n｛Wakaouji＊＊｝.");
        }
    else if (Parameter_GetCh1Param(7, 130) == 3){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_08F", 0);
        Voice_PlayVoice("", 7, "H3B07000_G00100");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Welcome, ｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝.\nI am in your favor this week.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("H3B07000_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Me too.\nI will leave my cats in your care.");
        Message_Who(0);
        Message_MsgDisp("主人公", "...\nYou also brought your cats along\nwith you?");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H3B07000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Because I cannot leave them at home.\nThey will go around freely, so do\nnot worry.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Uhh... Anyway!\nPlease give us guidance,\n｛Wakaouji＊＊｝.");
        }
    else {
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 5);
        Character_Chara_GS2(7, "M7_08F", 0);
        Voice_PlayVoice("", 7, "H3B07000_G00400");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝, welcome to\nthe training camp.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝.\nI am in your favor this week.");
        Voice_PlayVoice("H3B07000_G00500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I will become a devil during this\ntraining camp.\nPlease be prepared for it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, really!?");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("H3B07000_G00600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "...\nI will be a devil to the best of my\nability.\nIt's because I want you to become\nstronger.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(You don't look like you'll be a\ndevil, ｛Wakaouji＊＊｝...)");
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(7, 2, (#1));
        Voice_PlayVoice("H3B07000_G00700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Hmm? Did you say something?");
        Message_Who(0);
        Message_MsgDisp("主人公", "N-No, nothing at all!\nPlease give us guidance.");
        }
    Message_CloseMsg();
    Screen_WipeOut(21);
    }
