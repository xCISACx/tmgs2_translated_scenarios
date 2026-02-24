section "j01_m6_000"{
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
    if (Parameter_GetCh1Param(6, 512) == 2){
        System_Call_GS2("J08", "M6", 0);
        }
    else {
        if (Parameter_ChkChar(6, 2) == 0){
            SoundEffect_PlaySE(21, 127);
            System_Wait(#300);
            SoundEffect_StopSE(21, 0);
            if (Parameter_GetCh1Param(6, 130) >= 4){
                Voice_PlayVoice("J0106000_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hello, this is Amachi.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("J0106000_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, Senpai! What is it?\nDo you need something?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uhh...");
                }
            if ((Parameter_GetPl1Param(312) != 6) || (Parameter_GetCh1Param(6, 547) == 1)){
                if (Parameter_GetCh1Param(6, 130) <= 2){
                    Voice_PlayVoice("J0106000_F00000", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Hello, this is Amachi.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                    Voice_PlayVoice("J0106000_F00100", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Ah, so it's you, Senpai. Hello.\nWhat's the matter?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Uhh...");
                    }
                else if (Parameter_GetCh1Param(6, 130) == 3){
                    Voice_PlayVoice("J0106000_F00200", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Hello, this is Amachi.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                    Voice_PlayVoice("J0106000_F00300", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Ah, Senpai. What's up?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Uhh...");
                    }
                }
            else if ((Parameter_GetPl1Param(312) == 6) && (Parameter_GetCh1Param(6, 130) <= 2) && (Parameter_GetCh1Param(6, 547) == 0)){
                Voice_PlayVoice("J0106000_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hello, this is Amachi.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("J0106000_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah... Senpai! Hello.\nI mean, I am here!");
                Voice_PlayVoice("J0106000_F00800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Geez! It's nothing, go away!!");
                Voice_PlayVoice("J0106000_F00900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, I'm sorry... It was my sis...\nI mean my older sister......\nSo, is there something you need?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uhh...");
                Parameter_InCh1Param(6, 547, 1);
                }
            else if ((Parameter_GetPl1Param(312) == 6) && (Parameter_GetCh1Param(6, 130) == 3) && (Parameter_GetCh1Param(6, 547) == 0)){
                Voice_PlayVoice("J0106000_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hello, this is Amachi.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("J0106000_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah... Senpai! Uhh, so what's up?\nWhy are you...");
                Voice_PlayVoice("J0106000_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Geez! It's nothing, go away!!");
                Voice_PlayVoice("J0106000_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, sorry!\nMy big sis is being annoying....\nSo, what is it?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uhh...");
                Parameter_InCh1Param(6, 547, 1);
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
            System_Call_GS2("J03", "M6", 0);
            }
        else {
            SoundEffect_PlaySE(21, 127);
            System_Wait(#300);
            SoundEffect_StopSE(21, 0);
            Voice_PlayVoice("J0106000_F01400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hello, this is Amachi.");
            Voice_PlayVoice("J0106000_F01500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'm sorry, I can't answer the phone\nright now.\nPlease leave a message.");
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
                System_Call_GS2("J03", "M6", 10);
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
