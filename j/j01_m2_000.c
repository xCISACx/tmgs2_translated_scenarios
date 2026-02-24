section "j01_m2_000"{
    int var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_?_0", 1, 1);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_0", 1, 1);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_0", 1, 1);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_0", 1, 1);
        break ;
        }
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(2, 512) == 2){
        System_Call_GS2("J08", "M2", 0);
        }
    else {
        if (Parameter_ChkChar(2, 2) == 0){
            SoundEffect_PlaySE(21, 127);
            System_Wait(#300);
            SoundEffect_StopSE(21, 0);
            if (Parameter_GetCh1Param(2, 130) >= 4){
                Voice_PlayVoice("J0102000_B00500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Shiba here.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("J0102000_B00600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Huh? ｛Shiba＊＊｝?");
                Voice_PlayVoice("J0102000_B00700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Ah... My bad.");
                Voice_PlayVoice("J0102000_B00800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I didn't think I'd be hearing your\nvoice so soon, so I ended up spacing\nout...\nWhat is it?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uhh...");
                }
            if ((Parameter_GetPl1Param(312) != 2) || (Parameter_GetCh1Param(2, 547) == 1)){
                if (Parameter_GetCh1Param(2, 130) <= 2){
                    Voice_PlayVoice("J0102000_B00000", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... Shiba here.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                    Voice_PlayVoice("J0102000_B00100", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "...... Ah..........");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "... Hello?");
                    Voice_PlayVoice("J0102000_B00200", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "...\nYou called me because you need\nsomething, right?\nSay it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Y-Yeah. Uhh...");
                    }
                else if (Parameter_GetCh1Param(2, 130) == 3){
                    Voice_PlayVoice("J0102000_B00300", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... Shiba here.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                    Voice_PlayVoice("J0102000_B00400", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "Ah.... What's up?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Uhh...");
                    }
                }
            else if ((Parameter_GetPl1Param(312) == 2) && (Parameter_GetCh1Param(2, 130) <= 3) && (Parameter_GetCh1Param(2, 547) == 0)){
                Voice_PlayVoice("J0102000_B00900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Shiba here.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("J0102000_B01000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Ah.");
                Voice_PlayVoice("J0102000_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nIf you're calling because of the\nhurdle thing, I thought I told you\nto forget about it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "N-No! I wasn't calling about that...");
                Voice_PlayVoice("J0102000_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Really? Then what?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uhh...");
                Parameter_InCh1Param(2, 547, 1);
                }
            Message_CloseMsg();
            Message_CloseMsg(15);
            Screen_WipeOut(2);
            Run_Date_Day();
            while (Run_Date_Place() == #1){
                var0 = Parameter_GetPl1Param(12);
                switch (var0){
                    case 0:
                    Background_Bg_GS2("BG_HO200_?_0", 1, 1);
                    break ;
                    case 1:
                    Background_Bg_GS2("BG_HO210_?_0", 1, 1);
                    break ;
                    case 2:
                    Background_Bg_GS2("BG_HO220_?_0", 1, 1);
                    break ;
                    case 3:
                    Background_Bg_GS2("BG_HO230_?_0", 1, 1);
                    break ;
                    }
                Run_Date_Day();
                }
            var0 = Parameter_GetPl1Param(12);
            switch (var0){
                case 0:
                Background_Bg_GS2("BG_HO200_?_0", 1, 1);
                break ;
                case 1:
                Background_Bg_GS2("BG_HO210_?_0", 1, 1);
                break ;
                case 2:
                Background_Bg_GS2("BG_HO220_?_0", 1, 1);
                break ;
                case 3:
                Background_Bg_GS2("BG_HO230_?_0", 1, 1);
                break ;
                }
            Screen_WipeIn(2);
            System_Call_GS2("J02", "PL", 0);
            System_Call_GS2("J03", "M2", 0);
            }
        else {
            SoundEffect_PlaySE(21, 127);
            System_Wait(#300);
            SoundEffect_StopSE(21, 0);
            Voice_PlayVoice("J0102000_W01300", #1, "");
            Message_Who(0);
            Message_MsgDisp("Voicemail", "This is the voicemail service.");
            Voice_PlayVoice("J0102000_W01400", #1, "");
            Message_Who(0);
            Message_MsgDisp("Voicemail", "They are not available to answer\nyour call right now.\nPlease leave a message.");
            SoundEffect_PlaySE(22, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hmm, what should I do...");
            Message_MsgSel("Leave a message.", "Hang up.");
            switch (Message_TextSelect()){
                case 0:
                Message_CloseMsg();
                Message_CloseMsg(15);
                Screen_WipeOut(2);
                Run_Date_Day();
                while (Run_Date_Place() == #1){
                    var0 = Parameter_GetPl1Param(12);
                    switch (var0){
                        case 0:
                        Background_Bg_GS2("BG_HO200_?_0", 1, 1);
                        break ;
                        case 1:
                        Background_Bg_GS2("BG_HO210_?_0", 1, 1);
                        break ;
                        case 2:
                        Background_Bg_GS2("BG_HO220_?_0", 1, 1);
                        break ;
                        case 3:
                        Background_Bg_GS2("BG_HO230_?_0", 1, 1);
                        break ;
                        }
                    Run_Date_Day();
                    }
                var0 = Parameter_GetPl1Param(12);
                switch (var0){
                    case 0:
                    Background_Bg_GS2("BG_HO200_?_0", 1, 1);
                    break ;
                    case 1:
                    Background_Bg_GS2("BG_HO210_?_0", 1, 1);
                    break ;
                    case 2:
                    Background_Bg_GS2("BG_HO220_?_0", 1, 1);
                    break ;
                    case 3:
                    Background_Bg_GS2("BG_HO230_?_0", 1, 1);
                    break ;
                    }
                Screen_WipeIn(2);
                System_Call_GS2("J02", "PL", 10);
                System_Call_GS2("J03", "M2", 10);
                break ;
                case 1:
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "It can't be helped.\nI'll call him again next time.");
                break ;
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    }
