section "b04_m2_213"{
    int var0 = Date_GetDateOption(2, 65);
    Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
    Background_Bg_GS2("BG_TR330_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Voice_PlayVoice("B0402213_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It really is white...");
        Message_MsgSel("Wah～. How rare!", "The blue of its eyes are beautiful.", "Even if it's white, a tiger is still a tiger!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402213_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It's my first time seeing the real\nthing.\nIt looks like a stuffed toy.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402213_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.\nThe blue of its eyes shining from\nthe white fur...\nmakes it look really beautiful.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402213_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Yeah.\nSo, what is it that you wanna say?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0402213_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I have a feeling that it's\ndignified, just by being white.");
        Message_MsgSel("It's no different to a normal tiger.", "Apparently, it's God's messenger.", "Because you're tanned...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_BlinkStart(2, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402213_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah. How strange.");
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
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402213_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Eh...\nWhen you say that, it really does\nlook divine.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402213_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... You saying I have no dignity?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0402213_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It'd be nice if we could pet this\nguy as well...");
        Message_MsgSel("Yeah, I also want to pet it.", "It's like a big cat.", "Why don't you stretch out your hand?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402213_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.... Huh?\nIt seems like you can take a photo\nwith the cubs.\nLet's go.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(2, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402213_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.\nIf you showed a fluffy toy to it, it\nseems like it would come closer to\nyou.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0402213_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "There's a sign that says to not do\nit.\nAnd I'm not a kid...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0402213_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Idiot, stop!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Kya!\nI-It's fine, I'm not going to do\nit...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 7, 0);
                Voice_PlayVoice("B0402213_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...... It's fine, but I was scared.\nYou really seemed like you were\ngonna do it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Geez, I'm not a kid.");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402213_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nAnd what about you is so grown-up?\nTell me.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Geez!\nYou're mean, ｛Shiba＊＊｝!");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0402213_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "That sulky look of yours shows that\nyou're a kid.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh...");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402213_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... That's why I'm always worried.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh? About what?");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0402213_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", ".........\nAbout that thick-headedness.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Am I thick-headed?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
