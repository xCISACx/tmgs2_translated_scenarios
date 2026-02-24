section "j01_m4_000"{
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
    if (Parameter_GetCh1Param(4, 512) == 2){
        System_Call_GS2("J08", "M4", 0);
        }
    else {
        if (Parameter_ChkChar(4, 2) == 0){
            SoundEffect_PlaySE(21, 127);
            System_Wait(#300);
            SoundEffect_StopSE(21, 0);
            if (Parameter_GetCh1Param(4, 130) >= 4){
                Voice_PlayVoice("J0104000_D00500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Huh?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("J0104000_D00600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hariya＊＊｝?");
                Voice_PlayVoice("J0104000_D00700", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Ah, my bad!");
                Voice_PlayVoice("J0104000_D00800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I was just gonna hit the dial button\nand call you...\nNot!");
                Voice_PlayVoice("J0104000_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "What is it, you need something? ...\nS-Say it already.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uhh...");
                }
            if ((Parameter_GetPl1Param(312) != 4) || (Parameter_GetCh1Param(4, 547) == 1)){
                if (Parameter_GetCh1Param(4, 130) <= 2){
                    Voice_PlayVoice("J0104000_D00000", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Hello.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                    Voice_PlayVoice("J0104000_D00100", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Huh? ... Ah, it's you.\nWhat do you need?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Uhh...");
                    }
                else if (Parameter_GetCh1Param(4, 130) == 3){
                    Voice_PlayVoice("J0104000_D00200", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Hello.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                    Voice_PlayVoice("J0104000_D00300", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "Oh.\nAh, are you asking about the next\nlive?\nIt's--");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I'm not calling about that.");
                    Voice_PlayVoice("J0104000_D00400", #1, "");
                    Message_Who(4);
                    Message_MsgDisp("Hariya", "What, you're not? Then what?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Umm, you know...");
                    }
                }
            else if ((Parameter_GetPl1Param(312) == 4) && (Parameter_GetCh1Param(4, 130) <= 3) && (Parameter_GetCh1Param(4, 547) == 0)){
                Voice_PlayVoice("J0104000_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Hello.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("J0104000_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... O-Oh. What?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uhh...");
                Parameter_InCh1Param(4, 547, 1);
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
            System_Call_GS2("J03", "M4", 0);
            }
        else {
            SoundEffect_PlaySE(21, 127);
            System_Wait(#300);
            SoundEffect_StopSE(21, 0);
            Voice_PlayVoice("J0104000_W01200", #1, "");
            Message_Who(0);
            Message_MsgDisp("Voicemail", "This is the voicemail service.");
            Voice_PlayVoice("J0104000_W01300", #1, "");
            Message_Who(0);
            Message_MsgDisp("Voicemail", "They are not available to answer\nyour call right now.\nPlease leave a message.");
            SoundEffect_PlaySE(22, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hmm, what should I do...?");
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
                System_Call_GS2("J03", "M4", 10);
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
