section "h8c_m3_003"{
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
        if (Parameter_GetCh1Param(3, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
            Voice_PlayVoice("H7C03000_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "So you were in charge of making food\ntoday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H7C03000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "The meals is one of the few things I\nlook forward to on camp.\nSo, we are having...");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("H7C03000_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "............ This?");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
            Voice_PlayVoice("", 3, "H7C03000_C00300");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝, was it your\nturn to make food today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H7C03000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Then I will gratefully eat your\nfood.\nWhat are we having?");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("H7C03000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Eh... this?");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(3, "M3_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
            Voice_PlayVoice("", 3, "H7C03000_C00600");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝, it was your\nturn to make food, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("H7C03000_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Then you've worked hard!\nI will gratefully eat the food that\nyou have prepared.");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("H7C03000_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You... Are we perhaps having...\nthis?");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetCh1Param(3, 130) <= 2){
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(3, 3, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("H7C03000_C06400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Well, I feel that at least one\nperson will be guilty of doing this.\nBut who would have thought that a\n3rd year student...");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(3, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food.)");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("H7C03000_C06500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Thanks for the food....\nEven if it grossly goes over the\nbudget, let us buy a cookbook.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(3, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food.)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(3, 3, (#1));
            Voice_PlayVoice("H7C03000_C06600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Thanks for the food...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm...");
            Character_BlinkStart(3, 0, (#1));
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H7C03000_C06700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nI'm glad that the microwave oven\nworks.\nIs that not a good thing?");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(3, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food.)");
            }
        Parameter_AddCh1Param(3, 61, #1);
        System_GlobalWork(1, 2, 1);
        break ;
        case 1:
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, I'll make\n｛主人公姓名｝'s special\nChinese stir fry!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        if (Parameter_GetCh1Param(3, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
            Voice_PlayVoice("H7C03000_C01300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Oh?\nSo you are in charge of making food\ntoday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.");
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("H7C03000_C01400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... I wonder what this smell is.\nDoes that mean we will be eating\nsoon?");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
            Voice_PlayVoice("", 3, "H7C03000_C01500");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝, so you were\nin charge of making food today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H7C03000_C01600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I wonder if it is because I yelled\ntoo much, but I have gotten hungry.\nHave you already made food?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I have. So, please eat!");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(3, "M3_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
            Voice_PlayVoice("", 3, "H7C03000_C01700");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝, you have\nworked hard making food today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝!");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H7C03000_C01800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I am looking forward to eating your\nfood.\nSo we are having... Ah!\nThis looks considerably nice.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks. So, please eat!");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 60){
            if (Parameter_GetCh1Param(3, 130) <= 2){
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C06800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "That other place's Chinese stir fry\nis incomparable to the one you made.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Thank gosh. He ate it all!)");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C06900", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Your food gives me energy.\nIt seems like I will be able to do\nmy best in the latter half of the\ncamp.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay, I was complimented!)");
                }
            else {
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("H7C03000_C07000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "What was that other Chinese stir fry\nI have been eating up until now!?\nThanks for the food, it was\ndelicious.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay!\nIt seems like it was really yummy.)");
                }
            Parameter_AddCh1Param(3, 61, 3);
            }
        else {
            if (Parameter_GetCh1Param(3, 130) <= 2){
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H7C03000_C07100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I wonder why you call this Chinese\nstir fry.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H7C03000_C07200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Sorry, I have a weak stomach...\nSorry for making you worry.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            else {
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C07300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Thanks for the food.\nYou should take zinc supplements.\nIt seems like it will repair your\nsense of taste.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            Parameter_AddCh1Param(3, 61, #3);
            }
        System_GlobalWork(1, 2, 2);
        break ;
        case 2:
        Message_Who(0);
        Message_MsgDisp("主人公", "Alright! I'll take on Ossobuco!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        if (Parameter_GetCh1Param(3, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
            Voice_PlayVoice("H7C03000_C07400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "So you were in charge of making food\ntoday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H7C03000_C07500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Did you make this?\nI can feel your strong enthusiasm.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha! Please eat.");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
            Voice_PlayVoice("", 3, "H7C03000_C07600");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝, so you were\nin charge of making food today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah! I've made it already.");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("H7C03000_C07700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, you used the oven!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha, please eat!");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(3, "M3_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
            Voice_PlayVoice("", 3, "H7C03000_C07800");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.\nYou are in charge of dinner tonight,\nright?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("H7C03000_C07900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It smells good...\nWhat are we having?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha, Ossobuco.");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H7C03000_C08000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Did you really make this?\nI can tell that it's complex just by\nlooking at it!");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hikami＊＊｝, try it!");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 80){
            if (Parameter_GetCh1Param(3, 130) <= 2){
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C08100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Thanks for the food.\nGood food makes people happy.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nI'm glad I tried my best making\nfood.)");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C08200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Thanks for the food.\nIt tasted better than I anticipated.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C08300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "If I can eat such delicious food, I\nwould happily join camps all\nthroughout Summer.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nI'm glad I tried my best making\nfood.)");
                }
            else {
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("H7C03000_C08400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Thanks for the food....\nMy hat goes off to your talent.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("H7C03000_C08500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "It was so profound that I cannot\nbelieve that we are the same age....\nI want to eat more of the food you\nmake.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nI'm glad I tried my best making\nfood.)");
                }
            Parameter_AddCh1Param(3, 61, 5);
            }
        else {
            if (Parameter_GetCh1Param(3, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("H7C03000_C08600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Thanks for the food.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C08700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Thanks for the food.\nThe only possible reason for this\nwas because you were busy.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            else {
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C08800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Thanks for the food.\nIt's fine, I understand.\nThis is something you orchestrated.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C08900", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "The next time you make Ossobuco, you\nshould have more excitement....\nI will look forward to that time.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            Parameter_AddCh1Param(3, 61, 5);
            }
        System_GlobalWork(1, 2, 3);
        break ;
        }
    System_Call_GS2("H8C", "G2", 0);
    }
