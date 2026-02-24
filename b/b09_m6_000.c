section "b09_m6_000"{
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
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Oh, I got a voicemail on my cell\nphone.\nWonder who it could be?)");
            SoundEffect_PlaySE(20, 127);
            Voice_PlayVoice("B0906000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Umm... It's Amachi.\nWasn't there a date today?\nI'm worried, please contact me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Oh no, we had plans for a date\ntoday!)");
            SoundEffect_PlaySE(24, 127);
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Oh, I got a voicemail on my cell\nphone.\nWonder who it could be?)");
            SoundEffect_PlaySE(20, 127);
            Voice_PlayVoice("B0906000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai had the nerve to stand me up\nfor our date...\nI hope you can properly make up for\nit!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Oh no, we had plans for a date\ntoday!)");
            SoundEffect_PlaySE(24, 127);
            }
        }
    else {
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Oh, I got a voicemail on my cell\nphone.\nWonder who it could be?)");
            SoundEffect_PlaySE(20, 127);
            Voice_PlayVoice("B0906000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Umm... It's Amachi.\nSenpai, are you all right?\nI'm worried, please contact me.");
            SoundEffect_PlaySE(24, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Noooo!\nI got the meeting place of the date\nwrong!)");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Oh, I got a voicemail on my cell\nphone.\nWonder who it could be?)");
            SoundEffect_PlaySE(20, 127);
            Voice_PlayVoice("B0906000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai, I waited for quite a long\ntime...\nI'm worried, please contact me so I\nknow you're okay.");
            SoundEffect_PlaySE(24, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Noooo!\nI got the meeting place of the date\nwrong!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 61, #10);
    Parameter_AddCh1Param(6, 60, #15);
    Parameter_AddCh1Param(6, 62, 15);
    }
