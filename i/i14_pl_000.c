section "i14_pl_000"{
    int var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_?_0", #1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_0", #1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_0", #1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_0", #1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    SoundEffect_PlaySE(21, 127);
    System_Wait(#300);
    SoundEffect_StopSE(21, 0);
    Voice_PlayVoice("I1400000_A00000", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "This is Cafe Sangosho--");
    Message_Who(0);
    Message_MsgDisp("主人公", "This is ｛主人公姓名｝....\n｛Saeki＊＊｝?");
    Voice_PlayVoice("I1400000_A00100", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "What the... it's you.");
    Voice_PlayVoice("I1400000_A00200", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "So, what?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Umm...\nI'd like to stop working at\nSangosho...");
    Voice_PlayVoice("I1400000_A00300", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "... Eh?");
    Voice_PlayVoice("I1400000_A00400", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", ".........");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Ugh, this is awkward...)");
    Message_MsgSel("I'll just continue.", "Quit.");
    switch (Message_TextSelect()){
        case 0:
        Message_Who(0);
        Message_MsgDisp("主人公", "... Forget what I just said!\nI won't be quitting. So, uhh...\numm...");
        Voice_PlayVoice("I1400000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... Thanks.");
        Message_Who(0);
        Message_MsgDisp("主人公", "It's n-nothing! ...\nSorry for saying something strange.\nPlease continue to treat me well.");
        Voice_PlayVoice("I1400000_A00600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah.... I'm hanging up.");
        SoundEffect_PlaySE(31, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(... Yeah, I'll do my best.)");
        break ;
        case 1:
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm...");
        Voice_PlayVoice("I1400000_A00700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", ".........");
        Voice_PlayVoice("I1400000_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I see... Okay.");
        SoundEffect_PlaySE(31, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "...\nMaybe that was the wrong thing to\ndo...");
        Parameter_InPl1Param(26, 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I quit working at the cafe.)");
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
