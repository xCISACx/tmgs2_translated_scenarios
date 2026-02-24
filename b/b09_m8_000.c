section "b09_m8_000"{
    int var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_?_2", 1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_2", 1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_2", 1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_2", 1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    if (System_GlobalWork(7, 1) == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, there's a message on my phone's\nvoicemail...\nWho is it...)");
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("B0908000_H00000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... It's Masaki.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Masaki＊＊｝!?)");
        Voice_PlayVoice("B0908000_H00100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "What's your take on standing someone\nup on a date, as a person?\nIf I see you next time, I'm gonna\nlecture you.");
        SoundEffect_PlaySE(24, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Crap...\nWe had plans for a date today!\nI stood him up!!)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, there's a message on my phone's\nvoicemail...\nWho is it...)");
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("B0908000_H00200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... It's Masaki.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, it's Masaki-senpai's voice...)");
        Voice_PlayVoice("B0908000_H00300", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "What's your take on standing someone\nup on a date, as a person?\nIf I see you next time, I'm gonna\nlecture you.");
        SoundEffect_PlaySE(24, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(What should I do...?\nWe were supposed to meet for our\ndate somewhere else!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(8, 61, #10);
    Parameter_AddCh1Param(8, 60, #15);
    }
