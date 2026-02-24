section "m01_g4_000"{
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
    Message_MsgDisp("主人公", "(Argh～, I'm bored...\nI'm bored of just sleeping...)");
    SoundEffect_PlaySE(19, 127);
    Message_Who(0);
    Message_MsgDisp("主人公", "(Ah, my phone is ringing...)");
    SoundEffect_StopSE(19, 0);
    SoundEffect_PlaySE(20, 127);
    Message_Who(0);
    Message_MsgDisp("主人公", "Hello.");
    Voice_PlayVoice("U0113000_M00000", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "Hello?");
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Mizushima＊＊｝!");
    Voice_PlayVoice("M0213000_M00000", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "Did I wake you up from your rest?");
    Message_Who(0);
    Message_MsgDisp("主人公", "No, I was already up.");
    Voice_PlayVoice("M0213000_M00100", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "Thank gosh...\nYou seem better than I thought.\nDon't make me worry...");
    Message_Who(0);
    Message_MsgDisp("主人公", "Sorry.");
    Voice_PlayVoice("M0213000_M00200", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "Haha, I'll forgive you.\nBecause I heard your upbeat voice.");
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Voice_PlayVoice("M0213000_M00300", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "It's about time I hung up.\nOnce you hang up, be a good girl and\nsleep, okay?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yes.");
    Voice_PlayVoice("M0213000_M00400", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "Good.... I will see you later.");
    SoundEffect_PlaySE(20, 127);
    Message_Who(0);
    Message_MsgDisp("主人公", "(｛Mizushima＊＊｝ is a nice\nperson, as expected...\nI have to get better soon.)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
