section "s04_m8_000"{
    int var0;
    if (Parameter_GetCh1Param(8, 130) <= 3){
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? Who could it be?");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("S0408000_H00000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Hey.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Masaki＊＊｝.\nWhat's up?");
        Voice_PlayVoice("S0408000_H00100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I'm thinking of visiting the shrine.\nHow's that sound? Coming?");
        Voice_PlayVoice("S0408000_H00200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I thought we could go if you didn't\nhave plans.");
        Message_MsgSel("Yes, please!", "I'm sorry, it's not a good idea...");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("S0408000_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Oh, good answer.\nI'll be right over to pick you up\nthen.\nGet ready and wait.");
            if (System_GlobalWork(23, 1) == 8){
                Voice_PlayVoice("FD_08_180_00000", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Honestly, you should go with your\nfavorite person...\nWell, sometimes.");
                }
            Message_Who(0);
            Message_MsgDisp("主人公", "Got it. I'll be waiting!");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(What should I wear?)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Run_Kigae(3);
            var0 = 0;
            break ;
            case 1:
            Voice_PlayVoice("S0408000_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "What the-- You're staying home?\nThe weather's nice, such a waste to\nsleep it away.");
            Voice_PlayVoice("S0408000_H00500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Well, nevermind. Bye then.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(He went through all that trouble to\nask me...\nMaybe it was wrong to decline...)");
            var0 = 1;
            break ;
            }
        }
    else {
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? Who could it be?");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("S0408000_H00600", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "It's me, Masaki.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Masaki＊＊｝.\nWhat's up?");
        Voice_PlayVoice("S0408000_H00700", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Umm... Do you have plans today?");
        Voice_PlayVoice("S0408000_H00800", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I thought...\nmaybe you wanted to go to the\nshrine.\nHow's that sound?");
        Message_MsgSel("I'm coming!", "Umm... I'm sorry...");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("S0408000_H00900", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... Is that so? Hahaha...\nCrap, I got nervous...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Voice_PlayVoice("S0408000_H01000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Umm... No, nothing.\nWell, I'll be right over to pick you\nup.");
            Message_Who(0);
            Message_MsgDisp("主人公", "That's not necessary...");
            Voice_PlayVoice("S0408000_H01100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "...\nIt's fine, I want to pick you up.");
            Voice_PlayVoice("S0408000_H01200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "On that note, dress yourself up\nperfectly.\nGot it?");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Giggles* Got it!\nI'll see you later then.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay! What should I wear?)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Run_Kigae(3);
            var0 = 0;
            break ;
            case 1:
            Voice_PlayVoice("S0408000_H01300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Oh, you're booked......\nAs I thought, I'm no match for the\nguy in the same generation as you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh...");
            Voice_PlayVoice("S0408000_H01400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Nothing, nevermind.\nForgive me for asking you out all of\na sudden.\nWell, see you then.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(He went through all that trouble to\nask me...\nMaybe it was wrong to decline...)");
            var0 = 1;
            break ;
            }
        }
    switch (var0){
        case 0:
        System_Call_GS2("S06", "M8", 0);
        System_Call_GS2("S07", "M8", 0);
        System_Call_GS2("S08", "PL", 0);
        System_Call_GS2("S09", "M8", 0);
        break ;
        case 1:
        System_GlobalWork(0, 0, 8);
        System_GlobalWork(2, 0, 1);
        System_GlobalWork(4, 0, 1);
        break ;
        }
    }
