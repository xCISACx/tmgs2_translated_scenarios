section "b09_m7_000"{
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
    if (Date_GetDateOption(5)){
        if (System_GlobalWork(7, 1) == 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Oh, I got a voicemail on my cell\nphone...\nWonder who it could be...?)");
            SoundEffect_PlaySE(20, 127);
            Voice_PlayVoice("B0907000_G00000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It's Wakaouji.\nWas there more pressing business or\nanything?\nAlthough, it could have been an\naccident.");
            Voice_PlayVoice("B0907000_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Everyone was worried.");
            SoundEffect_PlaySE(24, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Aah, damn it!!\nThe extracurricular class was\ntoday!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(Oh, I got a voicemail on my cell\nphone...\nWonder who it could be...?)");
            SoundEffect_PlaySE(20, 127);
            Voice_PlayVoice("B0907000_G00400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It's Wakaouji.\nWas there more pressing business or\nanything?\nAlthough, it could have been an\naccident.");
            Voice_PlayVoice("B0907000_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Everyone was worried.");
            SoundEffect_PlaySE(24, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(This is bad!\nI made a mistake with the\nextracurricular class's meeting\nplace!)");
            }
        }
    else {
        if (System_GlobalWork(7, 1) == 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Oh, I got a voicemail on my cell\nphone...\nWonder who it could be...?)");
            SoundEffect_PlaySE(20, 127);
            Voice_PlayVoice("B0907000_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It's Wakaouji.\nWasn't there a date today?\nYou do not seem to have a lot of\nself-confidence.");
            Voice_PlayVoice("B0907000_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "If that's the case, I'm\ndisappointed.");
            SoundEffect_PlaySE(24, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Oh no, I forgot about the date we\nplanned today!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(Oh, I got a voicemail on my cell\nphone...\nWonder who it could be...?)");
            SoundEffect_PlaySE(20, 127);
            Voice_PlayVoice("B0907000_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It's Wakaouji.\nWasn't there a date today?\nYou do not seem to have a lot of\nself-confidence.");
            Voice_PlayVoice("B0907000_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "If that's the case, I'm\ndisappointed.");
            SoundEffect_PlaySE(24, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Damn it!\nI got the meeting place for the date\nwrong!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 61, #10);
    Parameter_AddCh1Param(7, 60, #15);
    }
