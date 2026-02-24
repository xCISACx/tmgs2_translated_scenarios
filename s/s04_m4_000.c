section "s04_m4_000"{
    int var0;
    if (Parameter_GetCh1Param(4, 130) <= 3){
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, hello?");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("S0404000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Howdy.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Hariya＊＊｝.\nWhat's up?");
        Voice_PlayVoice("S0404000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Wanna go visit the shrine for New\nYear's Day?");
        Message_MsgSel("Yeah, sounds good!", "Oh... I'm sorry.");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("S0404000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Then I'll come meet you at your\nhouse.\nTry to be ready!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, great! I'll be waiting then.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(What should I do for now?\nI'll pick out what I'll wear...)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Run_Kigae(3);
            var0 = 0;
            break ;
            case 1:
            Voice_PlayVoice("S0404000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "What, you can't...? ...\nI get it, later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(He went through all that trouble to\nask me.\nMaybe it was bad to turn him\ndown...)");
            Parameter_AddCh1Param(4, 62, 4);
            var0 = 1;
            break ;
            }
        }
    else {
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh, hello?");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("S0404000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Yo.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝.\nYo, what's up?");
        Voice_PlayVoice("S0404000_D00500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Uh...\nIf you're free, do you want to visit\nthe shrine for New Year's Day?");
        Message_MsgSel("Yeah, I'll go!", "Oh... I'm sorry...");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("S0404000_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Good... not! Anyway!");
            Voice_PlayVoice("S0404000_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'll come meet you at your house, so\nget ready and wait for me.\nOkay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, got it. I'll be waiting then.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Wah～! What should I wear?)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Run_Kigae(3);
            var0 = 0;
            break ;
            case 1:
            Voice_PlayVoice("S0404000_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Right... I see.......");
            Voice_PlayVoice("S0404000_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'll call you again eventually......\nLater～.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(He went through all that trouble to\nask me.\nMaybe it was bad to turn him\ndown...)");
            Parameter_AddCh1Param(4, 62, 4);
            var0 = 1;
            break ;
            }
        }
    switch (var0){
        case 0:
        System_Call_GS2("S06", "M4", 0);
        System_Call_GS2("S07", "M4", 0);
        System_Call_GS2("S08", "PL", 0);
        System_Call_GS2("S09", "M4", 0);
        break ;
        case 1:
        System_GlobalWork(0, 0, 4);
        System_GlobalWork(2, 0, 1);
        System_GlobalWork(4, 0, 1);
        break ;
        }
    }
