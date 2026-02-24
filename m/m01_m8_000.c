section "m01_m8_000"{
    int var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_?_1", 1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_1", 1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_1", 1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_1", 1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(Argh～, I'm bored...\nI'm tired of just sleeping...)");
    SoundEffect_PlaySE(19, 127);
    Message_Who(0);
    Message_MsgDisp("主人公", "(Ah, my phone is ringing...\nI wonder who it is.)");
    SoundEffect_StopSE(19, 0);
    SoundEffect_PlaySE(20, 127);
    Message_Who(0);
    Message_MsgDisp("主人公", "Hello.");
    Voice_PlayVoice("M0108000_H00000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "I am Masaki.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah... ｛Masaki＊＊｝?");
    Voice_PlayVoice("M0108000_H00100", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Oh. Are you okay?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Eh?");
    Voice_PlayVoice("M0108000_H00200", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "\"Eh\", you say... You fainted, right?\nWhen I came to work, you weren't\nthere...");
    Message_Who(0);
    Message_MsgDisp("主人公", "Saying I fainted is an exaggeration.\nMy fever has also already gone down.");
    Voice_PlayVoice("M0108000_H00300", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "... Hey, you...\nWeren't you thinking that it was\nreally boring, just sleeping?");
    Message_Who(0);
    Message_MsgDisp("主人公", "... Uhh...");
    Voice_PlayVoice("M0108000_H00400", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Bullseye. Don't take colds lightly.\nThey're the source of all diseases.\nYou'll be crying later if you don't\nfully recover.");
    Voice_PlayVoice("M0108000_H00500", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "You were thinking of just recovering\na little and then making a full\nrecovery by giving it to someone,\nright?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ugh....");
    Voice_PlayVoice("M0108000_H00600", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "...\nWell, if it's your cold, I don't\nmind getting it from you.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Eh?");
    Voice_PlayVoice("M0108000_H00700", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Anneri is pretty empty today, so\nmaybe I should go and catch it from\nyou....\nYou at home alone?");
    Message_Who(0);
    Message_MsgDisp("主人公", "I a-am...");
    Voice_PlayVoice("M0108000_H00800", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "... That's even better.\nI'll be there in about 30 minutes,\nso unlock the front door.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ehh!? Umm... that's...");
    Voice_PlayVoice("M0108000_H00900", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "......... Hah. You're so shocked!\nHahahahaha!");
    Message_Who(0);
    Message_MsgDisp("主人公", "............\nYour jokes are too much,\n｛Masaki＊＊｝...");
    Voice_PlayVoice("M0108000_H01000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "It wasn't... a joke.\nAnyway, I'll do it another time.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Eh?");
    Voice_PlayVoice("M0108000_H01100", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Anyway, fully recover before you\ncome to work.\nLater!");
    SoundEffect_PlaySE(20, 127);
    Message_Who(0);
    Message_MsgDisp("主人公", "(You're bad for my heart,\n｛Masaki＊＊｝...\nI should hurry and recover so I can\nget back to work!)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
