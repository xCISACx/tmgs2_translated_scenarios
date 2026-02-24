section "h1c_m2_002"{
    Background_Bg_GS2("BG_SC710_SU_1", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "It's my turn to cook today.\nSo, what should I make...");
    Message_MsgSel("Canned yakitori.", "Special chicken and egg on rice.", "Stuffed chicken wing tips.");
    switch (Message_TextSelect()){
        case 0:
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm...\nIt's bothersome, so I'll just make\ncanned yakitori.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_08F", 0);
        Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Voice_PlayVoice("H1C02000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "So it's your turn to cook today...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.");
            Voice_PlayVoice("H1C02000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "So we're eating...");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H1C02000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... No way... This...?");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Voice_PlayVoice("", 2, "H1C02000_B00300");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝, so it's your\nturn to cook today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.");
            Voice_PlayVoice("H1C02000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I see. What's on the menu today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "U-Umm... This...");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H1C02000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... This?");
            }
        else {
            Voice_PlayVoice("", 2, "H1C02000_B00600");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝, so it was\nyour turn to cook today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H1C02000_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I look forward to it....\nSo what's on the menu?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm, this...");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("H1C02000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Are you talking about this?");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(2, 2, (#1));
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm... how was it?");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("H1C02000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... *Sigh*...");
            Character_ChFace(0, 7, 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food...)");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm... how was it?");
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H1C02000_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... I didn't feel like eating it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(As expected, I should have made\nproper food...)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm... how was it?");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H1C02000_B01100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It wasn't enough...\nShouldn't you have planned out what\nkinda you'd need?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have been more accurate in\nmaking it...)");
            }
        Parameter_AddCh1Param(2, 61, #1);
        break ;
        case 1:
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, I'll make special chicken and\negg on rice!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(2, "M2_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
            Voice_PlayVoice("H1C02000_B01200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Eh... homemade, huh.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. Try some.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H1C02000_B01300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Ah.");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(2, "M2_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
            Voice_PlayVoice("H1C02000_B01400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It's amazing that it's homemade.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. Try some.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H1C02000_B01500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I will then.");
            }
        else {
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(2, "M2_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
            Voice_PlayVoice("H1C02000_B01600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Your homemade food, huh.\nI look forward to it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.\nI don't have much confidence in the\nflavor...\nBut please eat it.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H1C02000_B01700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I will then.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(2, 2, (#1));
        if (Parameter_GetPl1Param(20) >= 60){
            if (Parameter_GetCh1Param(2, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("H1C02000_B01800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It was nice. Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm glad he ate it all!)");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_BlinkStart(2, 2, (#1));
                Character_BlinkStart(2, 0, (#1));
                Voice_PlayVoice("H1C02000_B01900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Do you usually cook? It was nice.\nThanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Thank gosh... I was complimented!)");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 0, 6);
                Voice_PlayVoice("H1C02000_B02000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You're... good at cooking.\nIt seems like you'd be a good wife.\nThanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay, it seems like it was yummy.)");
                }
            Parameter_AddCh1Param(2, 61, 3);
            }
        else {
            if (Parameter_GetCh1Param(2, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H1C02000_B03700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... It was gross.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I have to try harder!)");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H1C02000_B03800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... That was just egg on rice.\nDid you cook the chicken thoroughly?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh, I failed...\nI have to try harder!)");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("H1C02000_B03900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Uh...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uh...?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H1C02000_B04000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It was nice... That's what I'll say.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H1C02000_B04100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nHey, do we have any medicine around\nhere?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh...\nIt seems like it wasn't nice.\nI have to try harder!)");
                }
            Parameter_AddCh1Param(2, 61, #3);
            }
        break ;
        case 2:
        Message_Who(0);
        Message_MsgDisp("主人公", "Alright!\nI'll take on the stuffed chicken\nwing tips!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(2, "M2_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
            Voice_PlayVoice("H1C02000_B04200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nIs this something made especially\nfor the training camp?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Uh...\nAnyway, why don't you try some?");
            Voice_PlayVoice("H1C02000_B04300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Okay.");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(2, "M2_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
            Voice_PlayVoice("H1C02000_B04400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Eh. Looks good.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha. Why don't you try some?");
            Voice_PlayVoice("H1C02000_B04500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Okay.");
            }
        else {
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(2, "M2_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
            Voice_PlayVoice("H1C02000_B04600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "This is different from normal fried\nchicken...\nright?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. I tried adding a bit more.");
            Character_ChFace(0, 0, 6);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1C02000_B04700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Sounds nice. Can I eat it?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Sure! Go ahead and eat.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(2, 2, (#1));
        if (Parameter_GetPl1Param(20) >= 80){
            if (Parameter_GetCh1Param(2, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H1C02000_B04800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I actually liked it.\nThanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm glad he ate it all!)");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H1C02000_B04900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You seem like you normally cook....\nI'm seeing you in a new light.\nThanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay, it seems like it was yummy!)");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("H1C02000_B05000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I didn't think there'd be stuff\ninside.\nYou made it quite well.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Were you surprised?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H1C02000_B05100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Yeah. And it was nice...");
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H1C02000_B05200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I've fallen ...\nNo, I mean I'm seeing you in a new\nlight.\nThanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Thank gosh he liked it...)");
                }
            Parameter_AddCh1Param(2, 61, 5);
            }
        else {
            if (Parameter_GetCh1Param(2, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H1C02000_B05300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nYou're amazing for wanting to hear\nmy opinion.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh...\nIt seems like it wasn't nice.\nI have to try harder!)");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H1C02000_B05400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You used too much pepper.\nDid you even taste it?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It seems like I failed...\nI have to try harder.)");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "How was it?");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("H1C02000_B05500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Needed effort.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh...");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H1C02000_B05600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nIf you need to practice, then I'll\nhelp you out.\nSo do your best.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I should try harder next time...)");
                }
            Parameter_AddCh1Param(2, 61, 5);
            }
        break ;
        }
    }
