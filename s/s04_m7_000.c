section "s04_m7_000"{
    int var0;
    if (Parameter_GetCh1Param(7, 130) <= 3){
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? Who could that be?");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("S0407000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It's Wakaouji. Happy New Year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝.\nHappy New Year. Is something wrong?");
        Voice_PlayVoice("S0407000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Sensei would like to visit the\nshrine for New Year's Day.\nWould you like to go together?");
        Message_MsgSel("Yes, I'd be delighted!", "I'm sorry, I'm a little...");
        switch (Message_TextSelect()){
            case 0:
            if (System_GlobalWork(23, 1) == 7){
                Voice_PlayVoice("FD_07_180_00000", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "I thought you might have had plans\nreserved...\nSeems to have been different.");
                }
            Voice_PlayVoice("S0407000_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Good, I have a companion.\nThen I will meet you when you are\nready.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, understood!");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(What to do? What should I wear...)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Run_Kigae(3);
            var0 = 0;
            break ;
            case 1:
            Voice_PlayVoice("S0407000_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "You...?\nAs I thought, I called on short\nnotice...");
            Voice_PlayVoice("S0407000_G00400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Let's look for other students....\nWell then.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(He went through all that trouble to\nask me...\nMaybe it was wrong of me to turn him\ndown...)");
            var0 = 1;
            break ;
            }
        }
    else {
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? Who could that be?");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("S0407000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It's Wakaouji. Happy New Year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝.\nHappy New Year! Is something wrong?");
        Voice_PlayVoice("S0407000_G00600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "No...\nAs a matter of fact, I am inviting\nyou to visit the shrine for New\nYear's Day.\nDo you want to go together?");
        Message_MsgSel("Yes, I'll go!", "I'm sorry, I'm a little...");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("S0407000_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Excellent.\nThen I will come meet you.\nI'll be waiting at your house.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, understood!");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Wakaouji＊＊｝ invited me to\nvisit the shrine for New Year's Day!\nWhat will I wear?)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Run_Kigae(3);
            var0 = 0;
            break ;
            case 1:
            Voice_PlayVoice("S0407000_G00800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Is that so... I am disappointed.\nIt was too sudden....\nWell, understood.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(He went through all that trouble to\nask me...\nMaybe it was wrong of me to turn him\ndown...)");
            var0 = 1;
            break ;
            }
        }
    switch (var0){
        case 0:
        System_Call_GS2("S06", "M7", 0);
        System_Call_GS2("S07", "M7", 0);
        System_Call_GS2("S08", "PL", 0);
        System_Call_GS2("S09", "M7", 0);
        break ;
        case 1:
        System_GlobalWork(0, 0, 7);
        System_GlobalWork(2, 0, 1);
        System_GlobalWork(4, 0, 1);
        break ;
        }
    }
