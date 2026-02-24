section "i55_m7_000"{
    if (Parameter_GetCh1Param(7, 130) <= 2){
        Background_Bg_GS2("BG_AR500_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_06F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝! Welcome.");
        Voice_PlayVoice("I5507000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "So you are working part-time at a\nflorist.\nAre you working hard?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes.\nI learn something new every day.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("I5507000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "That is wonderful.\nEarning large amounts of money while\nlearning about society.\nThat is two birds with one stone.");
        Message_Who(0);
        Message_MsgDisp("主人公", "...\n｛Wakaouji＊＊｝, I'm not\nearning large amounts of money.");
        }
    else if (Parameter_GetCh1Param(7, 130) == 3){
        Background_Bg_GS2("BG_AR500_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_06F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝. Welcome!\nWhat are you--");
        Voice_PlayVoice("I5507000_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "No, keep working.\nI am on an observation tour of the\nstudents' work places today.");
        Message_Who(0);
        Message_MsgDisp("主人公", "An observation tour, you say?\nWho else is...?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(7, 2, (#1));
        Voice_PlayVoice("I5507000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "There is no one else.\nIt is just me because it is a\none-person tour.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh, is that so?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(7, 3, (#1));
        Voice_PlayVoice("I5507000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "That is correct.\nYou are working hard, aren't you?\nWell done. I will leave now.");
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Was he perhaps window shopping for\nthe new arrivals...?)");
        }
    else {
        Background_Bg_GS2("BG_AR500_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(7, 2, (#1));
        Character_Chara_GS2(7, "M7_06F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 7, "I5507000_G00500");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "You are working hard today as well,\n｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝! Welcome.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(7, 2, (#1));
        Voice_PlayVoice("I5507000_G00600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I came here to see you.\nSince you are working hard, I will\nbe a customer today.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Wah, thank you very much!\nWhat would you like,\n｛Wakaouji＊＊｝?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("I5507000_G00700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Please make a container for me with\nedible herbs.\nI will leave the variety of herbs up\nto you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I understand. Please wait a moment!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I will do my best to make\none!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
