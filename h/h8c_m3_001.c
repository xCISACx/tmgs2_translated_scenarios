section "h8c_m3_001"{
    Background_Bg_GS2("BG_SC710_SU_1", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "It's my turn to make food today.\nWhat should I make?");
    Message_MsgSel("Microwave curry.", "｛主人公姓名｝'s special curry.", "Pu pat pong curry.");
    switch (Message_TextSelect()){
        case 0:
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm...\nIt's bothersome, so I'll just make\nmicrowave curry.");
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
            Message_MsgDisp("Hikami", "The meals are one of the few things\nthat I look forward to at camp.\nSo, we are having...");
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
            Voice_PlayVoice("H7C03000_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Honestly, I was shocked.\nCouldn't you think of anything else?");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(3, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food...)");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("H7C03000_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I was looking forward to this,\ntoo...\nNo, I have no intention of blaming\nyou.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(3, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food.)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(3, 3, (#1));
            Voice_PlayVoice("H7C03000_C01100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Thanks for the food...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm...");
            Character_BlinkStart(3, 0, (#1));
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H7C03000_C01200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I understand.\nI apologize for making you cook food\nfor us, even though you are busy.");
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
        Message_MsgDisp("主人公", "Yeah, I'll make\n｛主人公姓名｝'s special\ncurry!");
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
            Message_MsgDisp("Hikami", "I am looking forward to eating your\nfood.\nSo we are having... Ah!\nThis looks quite nice.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks. So, please eat!");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 60){
            if (Parameter_GetCh1Param(3, 130) <= 2){
                Character_BlinkStart(3, 0, (#1));
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C01900", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "As I thought, homemade curry at camp\nis nice.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Thank gosh. He ate it all!)");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("", 3, "H7C03000_C02000");
                Message_Who(3);
                Message_MsgDisp("Hikami", "｛主人公｝, both my\nstomach and tastebuds are extremely\nsatisfied.\nYour curry was delicious.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay, I was complimented!)");
                }
            else {
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("H7C03000_C02100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I was surprised.\nCurry made by people who are picky\nabout it tastes different....\nIt was nice. Thanks for the food.");
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
                Voice_PlayVoice("H7C03000_C02200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Just because it is your homemade\nfood, it does not mean that\neverything can be forgiven.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H7C03000_C02300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Thanks for the food....\nI am sorry, just having one bite\nfilled me up.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            else {
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C02400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Thanks for the food.\nIt looked nice, and I could feel the\neffort that you put into it...");
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
        Message_MsgDisp("主人公", "Alright!\nI'll take on the Pu pat pong curry!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        if (Parameter_GetCh1Param(3, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
            Voice_PlayVoice("H7C03000_C02500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "So you were in charge of making food\ntoday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H7C03000_C02600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "This is crab...? That is amazing.\nI can feel your enthusiasm.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha! It's pu pat pong curry.\nPlease go ahead and eat.");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
            Voice_PlayVoice("", 3, "H7C03000_C02700");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝, so you were\nin charge of making food today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah! I've made it already.");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("H7C03000_C02800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, that is Japanese blue crab!\nDinner is quite elaborate today.\nSo it means that you have confidence\nin this food's flavor.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha! It's pu pat pong curry.\nPlease go ahead and eat.");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(3, "M3_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
            Voice_PlayVoice("", 3, "H7C03000_C02900");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝, you were in\ncharge of making food today, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("H7C03000_C03000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Actually I was looking forward to\nwhat kind of meal you would make for\nus...\nHmm? I smell curry.");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H7C03000_C03100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... This is amazing!\nI could not think of it as something\nsomeone would make at a high school\ncamp.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha! It's pu pat pong curry.\nPlease eat.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 80){
            if (Parameter_GetCh1Param(3, 130) <= 2){
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C03200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Thanks for the food.\nYou made it well.\nMy opinion about you has changed.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nI'm glad I tried my best making\nfood.)");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C03300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Thanks for the food.\nIt tasted even better than it\nlooked.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C03400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Actually, I didn't think that I\nwould be able to eat this kind of\nfood at camp.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nI'm glad I tried my best making\nfood.)");
                }
            else {
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("H7C03000_C03500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Thanks for the food....\nI respect you.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("H7C03000_C03600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "It is a miracle that a person who\ncan cook this well is in the Student\nCouncil.\nIf the other clubs knew, they'd be\nannoyed.");
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
                Voice_PlayVoice("H7C03000_C03700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nIt did not beat the impact of the\nvisuals.\nT-Thanks for the food.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C03800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Thanks for the food.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C03900", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Everyone knows that you are busy.\nSo we will not mind having a simpler\nmeal next time.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            else {
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C04000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Thanks for the food.\nIt is fine, I know.\nI appreciate your fighting spirit.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C04100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "This should be an unforgettable\nmemory from this camp for everyone,\nnot just me.");
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
