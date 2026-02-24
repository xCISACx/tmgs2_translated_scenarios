section "p11_pl_000"{
    int var0;
    if (Parameter_GetPl1Param(13) == 0){
        Background_Bg_GS2("BG_SC300_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("P0100000_W00000", #1, "");
        Message_Who(0);
        Message_MsgDisp("Chairman", "As a result of majority rule, this\nyear's Culture Festival has been\ndecided on a coffee lounge.");
        Voice_PlayVoice("P0100000_W00100", #1, "");
        Message_Who(0);
        Message_MsgDisp("Chairman", "Let's do our best until the Culture\nFestival in two weeks.");
        SoundEffect_PlayStream(2, "SS_T_00_152_S00");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Okay!\nI will show some fighting spirit and\ndo my best!)");
        SoundEffect_StopStream(2, 40);
        }
    else {
        var0 = Parameter_GetPl1Param(12);
        switch (var0){
            case 0:
            Background_Bg_GS2("BG_HO200_AU_1", #1, #1, 0);
            break ;
            case 1:
            Background_Bg_GS2("BG_HO210_AU_1", #1, #1, 0);
            break ;
            case 2:
            Background_Bg_GS2("BG_HO220_AU_1", #1, #1, 0);
            break ;
            case 3:
            Background_Bg_GS2("BG_HO230_AU_1", #1, #1, 0);
            break ;
            }
        Screen_WipeIn(2);
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(... My phone?\nAh, it's the committee chairman of\nthe class.)");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("P0100000_W00200", #1, "");
        Message_Who(0);
        Message_MsgDisp("Chairman", "The preparation of the Culture\nFestival is in two weeks.");
        Voice_PlayVoice("P0100000_W00300", #1, "");
        Message_Who(0);
        Message_MsgDisp("Chairman", "Our class decided on a coffee lounge\nfor this year.\nPlease help with the preparation.");
        Voice_PlayVoice("P0100000_W00400", #1, "");
        Message_Who(0);
        Message_MsgDisp("Chairman", "Well then, take care of yourself.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Preparations for the Culture\nFestival...\nI have to get better soon if I want\nto participate!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
