section "z61_pl_000"{
    int var0;
    int var1;
    System_Call_GS2("Z71", "M7", 0);
    Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(Today is career guidance.\nMy career...)");
    while (var0 == 0){
        Message_MsgSel("Go to university", "Find a job at a company", "Listen to what others chose");
        switch (Message_TextSelect()){
            case 0:
            var0 = 1;
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good! I'll enter at a university!)");
            Parameter_InPl1Param(24, 0);
            break ;
            case 1:
            var0 = 1;
            Message_Who(0);
            Message_MsgDisp("主人公", "(All right!\nLet's aim to find employment!)");
            Parameter_InPl1Param(24, 1);
            break ;
            case 2:
            var0 = 0;
            Message_Who(0);
            Message_MsgDisp("主人公", "(Whose course will you hear?)");
            Message_Sele_Syusyoku();
            var1 = Message_Sele_Syusyoku_Result();
            if (var1 == 1){
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Saeki＊＊｝ will take an\nentrance exam for a first-rate\nuniversity...)");
                }
            else if (var1 == 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝ is going to a\nfirst-rate sports university...\nI see...)");
                }
            else if (var1 == 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝ will take an\nentrance exam for a top-rate\nuniversity...\n*Humhum*...)");
                }
            else if (var1 == 4){
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hariya＊＊｝ will be\nworking part-time doing music\nactivities.\nI see...)");
                }
            else if (var1 == 5){
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Chris＊＊｝ will take\nover the family business back\nhome...)");
                }
            else if (var1 == 10){
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Toudou＊＊｝ will enter a\nvocational school...\nAs a nail artist?)");
                }
            else if (var1 == 11){
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Onoda＊＊｝ will be\ntaking an entrance exam for a\ntop-rated university...\nGo for it.)");
                }
            else if (var1 == 12){
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Nishimoto＊＊｝ will be\nattending a vocational school to get\nqualifications to be a chef...)");
                }
            else if (var1 == 13){
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Mizushima＊＊｝ will go to\nVienna overseas to study at a\nuniversity for music.)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("Z62", "M7", 0);
    }
