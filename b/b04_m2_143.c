section "b04_m2_143"{
    int var0 = Date_GetDateOption(2, 38);
    Background_Bg_GS2("BG_NE240_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_NE_240_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
    Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402143_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah. That guitar solo hit me.\nThey were fired up.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402143_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Hm?\nMaybe it was too fired up for you.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402143_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Really. Well... It can't be helped.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0402143_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I couldn't understand the lyrics.\nDid you... understand?");
        Message_MsgSel("Sorry, I wasn't paying attention to it.", "Yeah! I heard it all.", "Not at all. I ignored it....");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 9);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402143_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Is that so.\nIt was hard to understand.\nI guess I'll look it up later...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402143_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "As expected. Tell me later.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402143_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nYeah, you're making a completely\ndisinterested face.\nDo you hate it that much?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0402143_B00700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "There were a lot of people in the\naudience who looked flashy.");
        Message_MsgSel("I also want to try wearing those things!", "Maybe it was to match the artist?", "That kind of thing is embarrassing...");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402143_B00800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Quit it.\nEven if you forced yourself to do\nit, the clothes would fall apart.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0402143_B00900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "No!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Kyaa!");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402143_B01000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Ah... My bad.");
                Message_Who(0);
                Message_MsgDisp("主人公", "You scared me...\nYou suddenly spoke in a loud voice.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402143_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "If you wore that kind of clothing in\nthis kind of cramped space...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Like that strapless top...\nor a black tube top and stuff?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402143_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nI-I don't know for sure, but that...\nwould definitely be dangerous.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Dangerous??? What do you mean...?\nLike I'd get stabbed by a safety pin\nor something...?");
                Voice_PlayVoice("B0402143_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I wouldn't be able to protect you\nfrom those people giving you those\nkinda looks...\nSo...");
                Message_Who(0);
                Message_MsgDisp("主人公", "?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402143_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "On the other hand, it'd be\nimpossible for them to get you...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝ is whispering\nto himself...)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402143_B01500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Maybe.\nEven just by focusing on how you\nlook, it seems like you'd get fired\nup.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402143_B01600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nIf you think so, then all you have\nto do is not wear those clothes.\nIt's not something you have to say,\nright?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    }
