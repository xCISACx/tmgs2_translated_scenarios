section "p71_pl_001"{
    int var0;
    if (Parameter_GetPl1Param(338) < 3){
        if (Parameter_GetPl1Param(13) == 0){
            Background_Bg_GS2("BG_SCA70_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            if (Parameter_GetPl1Param(322) == 0){
                Voice_PlayVoice("P8100000_W00000", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "This year the Handicraft Club will\nbe holding a fashion show to perform\nin the gym.");
                Voice_PlayVoice("P8100000_W00100", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "We have two weeks to get prepared.\nLet's do our best.");
                SoundEffect_PlayStream(2, "SS_T_00_152_S00");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Okay!\nI will let out some fighting spirit\nand do my best!)");
                SoundEffect_StopStream(2, 40);
                }
            else if (Parameter_GetPl1Param(322) == 1){
                Voice_PlayVoice("P8100000_W00200", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "This year the Handicraft Club will\nbe holding a fashion show to perform\nin the gym.");
                Voice_PlayVoice("P8100000_W00300", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Make the best of the experience you\ngained last year to think of a party\ndress to make this year.");
                Voice_PlayVoice("P8100000_W00400", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "We have two weeks to get prepared.\nLet's do our best～.");
                SoundEffect_PlayStream(2, "SS_T_00_153_S00");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Okay!\nI will let out some fighting spirit\nand do my best!)");
                SoundEffect_StopStream(2, 40);
                }
            else {
                Voice_PlayVoice("P8100000_W00500", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "This year the Handicraft Club will\nbe holding a fashion show to perform\nin the gym.");
                Voice_PlayVoice("P8100000_W00600", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Make the best of the experience you\ngained up until now, to think of a\nwedding dress to make this year.");
                Voice_PlayVoice("P8100000_W00700", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "We have two weeks to get prepared.\nLet's do our best.");
                SoundEffect_PlayStream(2, "SS_T_00_148_S00");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Okay!\nI will let out some fighting spirit\nand do my best!)");
                SoundEffect_StopStream(2, 40);
                }
            }
        else {
            var0 = Parameter_GetPl1Param(12);
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
            SoundEffect_PlaySE(19, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(... Is that my phone?\nOh, it's from the director.)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Voice_PlayVoice("P8100000_W00800", #1, "");
            Message_Who(0);
            Message_MsgDisp("Club President", "The preparations for the Culture\nFestival will be going on for two\nweeks.");
            Voice_PlayVoice("P8100000_W00900", #1, "");
            Message_Who(0);
            Message_MsgDisp("Club President", "The Handicraft Club will be holding\na fashion show in the gym.\nPlease come to help set up.");
            Voice_PlayVoice("P8100000_W01000", #1, "");
            Message_Who(0);
            Message_MsgDisp("Club President", "Well then, take care.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(The preparations for the Culture\nFestival...\nI have to get better soon if I want\nto participate!)");
            }
        }
    else {
        if (Parameter_GetPl1Param(13) == 0){
            Background_Bg_GS2("BG_SCA70_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            if (Parameter_GetPl1Param(322) == 0){
                Voice_PlayVoice("P8100000_W00000", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "This year the Handicraft Club will\nbe holding a fashion show to perform\nin the gym.");
                Voice_PlayVoice("P8100000_W00100", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "We have two weeks to get prepared.\nLet's do our best.");
                SoundEffect_PlayStream(2, "SS_T_00_152_S00");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Okay!\nI will let out some fighting spirit\nand do my best!)");
                SoundEffect_StopStream(2, 40);
                }
            else if (Parameter_GetPl1Param(322) == 1){
                Voice_PlayVoice("P8100000_W00200", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "This year the Handicraft Club will\nbe holding a fashion show to perform\nin the gym.");
                Voice_PlayVoice("P8100000_W00300", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Make the best of the experience you\ngained last year to think of a party\ndress to make this year.");
                Voice_PlayVoice("P8100000_W00400", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "We have two weeks to get prepared.\nLet's do our best～.");
                SoundEffect_PlayStream(2, "SS_T_00_153_S00");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Okay!\nI will let out some fighting spirit\nand do my best!)");
                SoundEffect_StopStream(2, 40);
                }
            else {
                Voice_PlayVoice("P8100000_W00500", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "This year the Handicraft Club will\nbe holding a fashion show to perform\nin the gym.");
                Voice_PlayVoice("P8100000_W00600", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "Make the best of the experience you\ngained up until now, to think of a\nwedding dress to make this year.");
                Voice_PlayVoice("P8100000_W00700", #1, "");
                Message_Who(0);
                Message_MsgDisp("Club President", "We have two weeks to get prepared.\nLet's do our best.");
                SoundEffect_PlayStream(2, "SS_T_00_148_S00");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Okay!\nI will let out some fighting spirit\nand do my best!)");
                SoundEffect_StopStream(2, 40);
                }
            }
        else {
            var0 = Parameter_GetPl1Param(12);
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
            SoundEffect_PlaySE(19, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(... Is that my phone?\nOh, it's from the director.)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Voice_PlayVoice("P8100000_W00800", #1, "");
            Message_Who(0);
            Message_MsgDisp("Club President", "The preparations for the Culture\nFestival will be going on for two\nweeks.");
            Voice_PlayVoice("P8100000_W00900", #1, "");
            Message_Who(0);
            Message_MsgDisp("Club President", "The Handicraft Club will be holding\na fashion show in the gym.\nPlease come to help set up.");
            Voice_PlayVoice("P8100000_W01000", #1, "");
            Message_Who(0);
            Message_MsgDisp("Club President", "Well then, take care.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(The preparations for the Culture\nFestival...\nI have to get better soon if I want\nto participate!)");
            }
        Parameter_InPl1Param(320, 7);
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
