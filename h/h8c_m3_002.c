section "h8c_m3_002"{
    Background_Bg_GS2("BG_SC710_SU_1", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "It's my turn to make food today.\nWhat should I make?");
    Message_MsgSel("Canned yakitori.", "Special chicken and egg on rice.", "Stuffed chicken wing tips.");
    switch (Message_TextSelect()){
        case 0:
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm...\nIt's bothersome, so I'll just make\ncanned yakitori.");
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
            Message_MsgDisp("Hikami", "The meals are one of the few things\nI look forward to at camp.\nSo, we are having...");
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
            Message_MsgDisp("Hikami", "Honestly, I was shocked.\nCould you not think of anything\nelse?");
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
        Message_MsgDisp("主人公", "Yeah, I'll make special chicken and\negg on rice!");
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
                Voice_PlayVoice("H7C03000_C04200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "The chicken and egg on rice you made\nhas a nice flavor.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Thank gosh. He ate it all!)");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C04300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Your chicken and egg on rice was\ndelicious.\nMy energy has been replenished.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay, I was complimented!)");
                }
            else {
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("H7C03000_C04400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I was surprised, homemade chicken\nand egg on rice tastes so\ndifferent....\nIt was nice. Thanks for the food.");
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
                Voice_PlayVoice("H7C03000_C04500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I do not believe this is something\nthat you should give to people.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H7C03000_C04600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nSorry, I just remembered that I have\nsomething to take care of.\nThanks for the food, even though I\ndid not eat it all.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            else {
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C04700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Thanks for the food.\nYou communicated the complexities.\nSo you were doing trial and error.");
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
        Message_MsgDisp("主人公", "Alright!\nI'll take on stuffed chicken wing\ntips!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        if (Parameter_GetCh1Param(3, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
            Voice_PlayVoice("H7C03000_C04800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Are you in charge of making food\ntoday?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H7C03000_C04900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "This is ethnic food...?\nThis is a new thing for camp.\nIt shows your enthusiasm.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha! Please go ahead and eat.");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
            Voice_PlayVoice("", 3, "H7C03000_C05000");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝, you were in\ncharge of making food today, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah! I've made it already.");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("H7C03000_C05100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, stuffed chicken wing tips!\nThe fact that you have made it means\nthat you are used to eating it,\nright?\nAmazing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha, please eat!");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(3, "M3_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
            Voice_PlayVoice("", 3, "H7C03000_C05200");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.\nWeren't you in charge of making food\ntoday?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("H7C03000_C05300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I look forward to it.\nWhat are you making for us?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Stuffed chicken wing tips.");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H7C03000_C05400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I'm shocked that we can eat this\nkind of food at camp!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha! Please eat.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 80){
            if (Parameter_GetCh1Param(3, 130) <= 2){
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C05500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Thanks for the food.\nYou're quite skilled.\nMy opinion of you has changed.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nI'm glad I tried my best making\nfood.)");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C05600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Thanks for the food.\nIt tastes as good at it looks.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C05700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "The biggest gain of this camp is\nhaving such a delicious meal.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nI'm glad I tried my best making\nfood.)");
                }
            else {
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("H7C03000_C05800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Thanks for the food....\nYou are surprising.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("H7C03000_C05900", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "This is so good that I want to just\nforget about the debate and keep\neating.\nHaha, what a shameless wish.");
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
                Voice_PlayVoice("H7C03000_C06000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nPunishment is in order for expecting\ntoo much.\nI've learned a good lesson.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C06100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Thanks for the food.\nEveryone knows that you are busy.\nWe will not mind having a simpler\nmeal next time.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            else {
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C06200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Thanks for the food.\nI know that you are adventurous when\nit comes to food.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H7C03000_C06300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Failures are a part of adventures.\nPlease do your best to aim for a\nsuccessful meal....\nI will secretly support you.");
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
