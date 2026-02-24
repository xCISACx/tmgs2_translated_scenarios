section "p31_pl_000"{
    int var0;
    if (Parameter_GetPl1Param(13) == 0){
        Background_Bg_GS2("BG_SC300_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("P2100000_W00000", #1, "");
        Message_Who(0);
        Message_MsgDisp("Chairman", "There will be a school play for this\nyear's Culture Festival.\nBy all means, please participate\neveryone.");
        Voice_PlayVoice("P2100000_W00100", #1, "");
        Message_Who(0);
        Message_MsgDisp("Chairman", "We have two weeks to get prepared.\nLet's do our best.");
        SoundEffect_PlayStream(2, "SS_T_00_152_S00");
        Message_Who(0);
        Message_MsgDisp("主人公", "(A school play... Okay!\nI will let out some fighting spirit\nand do my best!)");
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
        Message_MsgDisp("主人公", "(... My phone?\nOh, it's the class chairman.)");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("P2100000_W00200", #1, "");
        Message_Who(0);
        Message_MsgDisp("Chairman", "The preparations for the Culture\nFestival will be in two weeks from\nnext week.");
        Voice_PlayVoice("P2100000_W00300", #1, "");
        Message_Who(0);
        Message_MsgDisp("Chairman", "Please participate in the\npreparations for this year's school\nplay.");
        Voice_PlayVoice("P2100000_W00400", #1, "");
        Message_Who(0);
        Message_MsgDisp("Chairman", "Well then, take care of yourself.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(A school play...\nI have to get better soon to\nparticipate!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_InPl1Param(320, 0);
    }
