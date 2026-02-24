section "q34_m7_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(7, "M7_17F", 0);
    Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(7, 130) <= 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "*Sigh～* The trip and this day will\nbe over soon...");
        Voice_PlayVoice("Q1207000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Are you feeling lonely?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Very! Sensei isn't lonely?");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("Q1207000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Well, it's hard to be the leader.\nThe sooner it ends, the quicker I'm\nsaved.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh... Is that right...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It was a fun field trip...)");
        }
    else if (Parameter_GetCh1Param(7, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "*Sigh～* The trip and this day will\nbe over soon...");
        Voice_PlayVoice("", 7, "Q1207000_G00200");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Did you have fun\n｛主人公｝?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, thanks to Sensei!");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(7, 2, (#1));
        Voice_PlayVoice("Q1207000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It was the best.\nSensei also enjoyed trying to be\nlike a student.");
        Message_Who(0);
        Message_MsgDisp("主人公", "If you enjoyed it,\n｛Wakaouji＊＊｝, then that's\ngood.");
        Voice_PlayVoice("Q1207000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes.\nOnce again, this has become a good\nmemory.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It was a fun field trip...)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "*Sigh～* The trip and this day will\nbe over soon...");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(7, 2, (#1));
        Voice_PlayVoice("Q1207000_G00500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "... Feeling a little sentimental.\nCorrect?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝!");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("Q1207000_G00600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Sensei feels the same way.\nHe wants the field trip to stay, as\nit is.");
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(7, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("Q1207000_G00700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "When Sensei was about your age, he\nnever thought about field trips...");
        Character_BlinkStart(7, 0, (#1));
        Voice_PlayVoice("Q1207000_G00800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "These past five days, Sensei felt\nlike a student who really had a lot\nof fun.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝...");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("Q1207000_G00900", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Let's breathe in all of the air here\nbefore it's too late.\nIt's free.");
        Message_Who(0);
        Message_MsgDisp("主人公", "*Giggles* You're right!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I was able to make it a truly nice\nmemory...)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    Parameter_AddCh1Param(7, 61, 6);
    Parameter_AddCh1Param(7, 60, 4);
    }
