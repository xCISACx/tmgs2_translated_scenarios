section "s12_m5_000"{
    int var0;
    if (Parameter_GetPl1Param(338) == 1){
        if (Parameter_GetCh1Param(5, 130) <= 2){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(5, "M5_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1205000_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It's so crowded. How messy...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Well, it's a good thing we didn't\nget lost in the crowd.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1205000_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, I guess. Let's go home then.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(A new year starts after this...!)");
            Music_StopBGM(0, 40);
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1205000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "What did you wish for?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Tee-hee, it's a secret.\nWhat did you wish for,\n｛Chris＊＊｝?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1205000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Well, of course...");
            Message_Who(0);
            Message_MsgDisp("主人公", "To have a cute girl as a classmate?");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("S1205000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", ".........");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, are you sure?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S1205000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Of course, you're one of those cute\ngirls, too▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "Geez! Get over yourself.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("S1205000_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "We better get going.\nI'll walk you home.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(5, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(5, "M5_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home.");
                Voice_PlayVoice("S1205000_E00700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You're welcome▼ Well then, bye.");
                Character_Chara_GS2(5, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This year will be a good year.)");
                }
            }
        else {
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(5, "M5_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1205000_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "With a crowd this big, our prayers\nmight not have been heard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "We don't know that.");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("S1205000_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Or maybe...\nPraying without thinking does prove\nto weaken the heart.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Chris＊＊｝...?");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("S1205000_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Well! We'd better get going.");
            Message_Who(0);
            Message_MsgDisp("主人公", "O-Okay.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(5, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(5, "M5_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("S1205000_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Same here.\nThank you for letting me walk you\nhome.");
                Voice_PlayVoice("S1205000_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Well then, later.");
                Character_Chara_GS2(5, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This year will be a good year.)");
                }
            }
        }
    else if (Parameter_GetPl1Param(338) == 2){
        if (Parameter_GetCh1Param(5, 130) <= 2){
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(5, "M5_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1205000_E01300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It's nice that the shrine draws\nfeelings.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.\nLet's do our best this year, too!");
            Character_BlinkStart(5, 0, (#1));
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("S1205000_E01400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You're right....\nLet's have fun together on our last\nyear!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It's my third year...\nI should show some fighting spirit\nthis year!)");
            Music_StopBGM(0, 40);
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(5, "M5_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "We're finally 3rd year students.\nTime flies so fast.");
            Voice_PlayVoice("S1205000_E01500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "We still have some time in the year\nleft.\nWe have to amuse ourselves more or\nit will be a waste.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see. Maybe you're right.");
            Voice_PlayVoice("S1205000_E01600", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It would certainly be a shame.\nAnyway, treat me well this year,\n｛主人公｝▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, same here!");
            Voice_PlayVoice("S1205000_E01700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Well, we better get going.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(5, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 5);
                Character_Chara_GS2(5, "M5_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home.");
                Voice_PlayVoice("S1205000_E01800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You're welcome.");
                Voice_PlayVoice("S1205000_E01900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Treat me well this year, okay?\nLet's go out more!\nWell, see you then.");
                Character_Chara_GS2(5, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(A 3rd year student...\nI wonder what this year will be\nlike?)");
                }
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "Finally, our third year.");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("S1205000_E02000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "...\nI want to still be a 3rd year\nstudent after this.");
            Voice_PlayVoice("S1205000_E02100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Having 1000 days for a year would\nhave been better.");
            Voice_PlayVoice("S1205000_E02200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Then I could be with you\nlonger..............");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1205000_E02300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Alas, it wouldn't suffice.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Chris＊＊｝...?");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("S1205000_E02400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm sorry, I'm talking to myself.\nDon't mind me.");
            Voice_PlayVoice("S1205000_E02500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It's getting late.\nI'll walk you home.");
            Message_Who(0);
            Message_MsgDisp("主人公", "O-Okay.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(5, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Character_Chara_GS2(5, "M5_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home.");
                Voice_PlayVoice("S1205000_E02600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Yeah.");
                Voice_PlayVoice("S1205000_E02700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "We've got less than a year.\nSo seriously... treat me well.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, same here.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("S1205000_E02800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Well then, I'll see you at school.\nBye.");
                Character_Chara_GS2(5, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(A 3rd year student...\nI hope this will be a good year.)");
                }
            }
        }
    else {
        if (Parameter_GetCh1Param(5, 130) <= 2){
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(5, "M5_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "It's almost graduation.");
            Voice_PlayVoice("S1205000_E02900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "...\n*Sigh*");
            Message_Who(0);
            Message_MsgDisp("主人公", "What's wrong?\nWhy are you sighing about?");
            Voice_PlayVoice("S1205000_E03000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I thought it went by too quickly.\nI wish we could stay like this\nlonger.");
            Voice_PlayVoice("S1205000_E03100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "...\nMust be fun to stay like this, being\na high school student forever...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, you're right...");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 3);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Graduation is soon...)");
            Music_StopBGM(0, 40);
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(5, "M5_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1205000_E03200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "We're already 3rd year students...\nI hate to graduate. It's so sad.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Voice_PlayVoice("S1205000_E03300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It seems so obvious that I can't go\nout with you any more like this...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("S1205000_E03400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... It can't be helped.\nI was just thinking about the year\nbefore.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S1205000_E03500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "We have to enjoy what is left of our\nhigh school life.\nJust think about the future when it\ncomes!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, you're right!");
            Voice_PlayVoice("S1205000_E03600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Haha. Well, let's go home.\nI'll walk you.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(5, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(5, "M5_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home.");
                Voice_PlayVoice("S1205000_E03700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You're welcome.\nWell then, I'll see you at school.");
                Character_Chara_GS2(5, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Graduation is soon...\nIt surely went by pretty fast!)");
                }
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "Why did you look so serious when you\nwere praying, ｛Chris＊＊｝?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1205000_E03800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah...");
            Voice_PlayVoice("S1205000_E03900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Well...\nI was looking back on the past three\nyears.");
            Voice_PlayVoice("S1205000_E04000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I thought it could have been longer\nbut time flies so fast, to be\nhonest.");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("S1205000_E04100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... It happened so fast. Well...\nI've lost my determination...");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Chris＊＊｝...?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1205000_E04200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Let's go home. Let me walk you.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(5, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(5, "M5_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("S1205000_E04300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah....\nI hope we can visit the shrine again\nnext year.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah. Will you invite me?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("S1205000_E04400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nWhen you say it like that, I don't\nknow...");
                Character_BlinkStart(5, 0, (#1));
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("S1205000_E04500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Of course, I'll ask you out.\nI can't wait for it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!");
                Character_Chara_GS2(5, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Graduation is three months from\nnow.\nIt happened so fast...)");
                }
            }
        }
    switch (var0){
        case 0:
        break ;
        case 1:
        System_Call_GS2("K02", "M5", 10);
        System_Call_GS2("K02", "M5", 20);
        Parameter_InPl1Param(336, #1);
        break ;
        }
    Parameter_AddCh1Param(5, 86, 1);
    Message_CloseMsg();
    Screen_WipeOut(1);
    }
