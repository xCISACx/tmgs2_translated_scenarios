section "h6c_g4_003"{
    Background_Bg_GS2("BG_SC710_SU_1", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "It's my turn to make food today.\nWhat should I make?");
    Message_MsgSel("Microwave gyuudon.", "｛主人公姓名｝'s special stir fry.", "Ossobuco.");
    switch (Message_TextSelect()){
        case 0:
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm...\nIt's bothersome, so I'll just make\nmicrowave gyuudon.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        if (Parameter_GetCh1Param(13, 513) != 1){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(13, "G4_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_13_000_D01", 127, 40);
            Voice_PlayVoice("", #1, "H6C13000_M06800");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "｛主人公｝, was it your\nturn to make food today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H6C13000_M06900", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Ah, you've even finished cleaning\nup.\nAs one would expect!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Uhh, all I did was heat up the food,\nthough...");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(13, 2, (#1));
            Voice_PlayVoice("H6C13000_M07000", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "I see...\nSo you wanted to try heating up\nfood...");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(13, "G4_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_13_000_D01", 127, 40);
            Voice_PlayVoice("H6C13000_M07100", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "You've worked hard making food.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(13, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("H6C13000_M07200", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Is this perhaps... what I'm eating?");
            Message_Who(0);
            Message_MsgDisp("主人公", "No, everyone is...");
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H6C13000_M07300", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Then are you having a fight with\neveryone...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...)");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetCh1Param(13, 513) != 1){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H6C13000_M07400", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Thanks for the food!");
            Message_Who(0);
            Message_MsgDisp("主人公", "The food isn't worth thanking me\nfor...");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("H6C13000_M07500", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Uhh... right!\nThis kind of food has been made to\ntaste nice, lately.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food.)");
            }
        else {
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("H6C13000_M07600", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "... Thanks for the food.");
            Message_Who(0);
            Message_MsgDisp("主人公", "The food isn't worth thanking me\nfor.");
            Character_BlinkStart(13, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H6C13000_M07700", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "... It's fine.\nRather, at least you won't stuff up\nmaking food like this.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food.)");
            }
        Parameter_AddCh1Param(13, 60, #1);
        break ;
        case 1:
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, I'll make\n｛主人公姓名｝'s special\nChinese stir fry!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        if (Parameter_GetCh1Param(13, 513) != 1){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(13, "G4_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_13_000_D01", 127, 40);
            Voice_PlayVoice("", #1, "H6C13000_M07800");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "｛主人公｝, it was your\nturn to make food, right?\nIt smells good...\nAh, is it Chinese food?");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Mizushima＊＊｝.\nI've just about finished making it.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H6C13000_M07900", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "I'll set out the table then, okay?");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(13, "G4_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_13_000_D01", 127, 40);
            Voice_PlayVoice("H6C13000_M08000", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "You've worked hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
            Character_BlinkStart(13, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("H6C13000_M08100", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "The preparations are falling behind\nschedule, aren't they?\nSorry I couldn't help out...");
            Message_Who(0);
            Message_MsgDisp("主人公", "N-No, it's fine!\nJust sit down and wait for the food!");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 60){
            if (Parameter_GetCh1Param(13, 513) != 1){
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(13, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H6C13000_M08200", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Thanks for the food.\nIt was nice▼");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really?");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(13, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H6C13000_M08300", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Yeah.\nThe meat is tender and the capsicum\nis crisp.\nYou've made a really nice meal▼");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay, I was complimented!)");
                }
            else {
                Character_BlinkStart(13, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H6C13000_M08400", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "... Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "The food isn't worth thanking me\nfor.");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(13, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H6C13000_M08500", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "... It's better than mine.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ah, she ate it all...\nThank gosh～)");
                }
            Parameter_AddCh1Param(13, 60, 3);
            }
        else {
            if (Parameter_GetCh1Param(13, 513) != 1){
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(13, 3, (#1));
                Voice_PlayVoice("H6C13000_M08600", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(13, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H6C13000_M08700", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Uhh, well......\nI can't think of anything. Sorry.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice...)");
                }
            else {
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(13, 3, (#1));
                Voice_PlayVoice("H6C13000_M08800", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Even though it's a simple recipe,\nwhat did you do to make it like\nthis...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("H6C13000_M08900", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Ah! Sorry, I...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(There's leftovers.\nSo it wasn't nice...)");
                }
            Parameter_AddCh1Param(13, 60, #3);
            }
        break ;
        case 2:
        Message_Who(0);
        Message_MsgDisp("主人公", "Alright! I'll take on the Ossobuco!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(13, "G4_08F", 0);
        Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_13_000_D01", 127, 40);
        if (Parameter_GetCh1Param(13, 513) != 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(13, 3, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H6C13000_M09000", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Something smells good...\nAh, I love Italian food～!\nI would have helped you out if you\ntold me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha. Please eat.");
            }
        else {
            Voice_PlayVoice("H6C13000_M09100", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", ".........");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.\nI've just finished making food.");
            Character_BlinkStart(13, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("H6C13000_M09200", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Italian...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Do you perhaps hate Italian food?");
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(13, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H6C13000_M09300", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "... I love it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "R-Really...? That's good.\nPlease sit!");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 80){
            if (Parameter_GetCh1Param(13, 513) != 1){
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H6C13000_M09400", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Gee!\nYou kept it secret from me that you\nwere good at cooking!\nYou're so mean!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Haha, was it nice?");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(13, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H6C13000_M09500", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Yeah, I give you 3 stars for it.\nHaha, thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nI'm glad I tried my best making\nfood.)");
                }
            else {
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("H6C13000_M09600", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "The food isn't worth thanking me\nfor.");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(13, 3, (#1));
                Voice_PlayVoice("H6C13000_M09700", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "...\nEven though it tastes nice, this is\nmy first time being this sad.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(13, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ah, she ate it all.\nI'm glad I tried my best making\nfood.)");
                }
            Parameter_AddCh1Param(13, 60, 5);
            }
        else {
            if (Parameter_GetCh1Param(13, 513) != 1){
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(13, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H6C13000_M09800", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Thanks for the food. I'm full.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh, have you had enough already?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(13, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H6C13000_M09900", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Y-Yeah, uhh～... I...\nSorry, it seems like I can't think\nup anything.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice... Sorry.)");
                }
            else {
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H6C13000_M10000", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh, have you had enough already?");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(13, 2, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("H6C13000_M10100", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "... Was that Italian?");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(13, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice...)");
                }
            Parameter_AddCh1Param(13, 60, #5);
            }
        break ;
        }
    }
