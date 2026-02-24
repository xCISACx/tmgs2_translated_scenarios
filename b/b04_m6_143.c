section "b04_m6_143"{
    int var0 = Date_GetDateOption(2, 38);
    Background_Bg_GS2("BG_NE240_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_NE_240_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406143_F00000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, I think so too.\nThe band here sang good songs.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406143_F00100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, the songs were good.\nMaybe I'll buy their CD next time.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406143_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so? I'm quite satisfied.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406143_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah.\nI think it was better than I\nexpected.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 2, (#1), 1);
            Character_ChFace(0, 3, 5);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406143_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so? I enjoyed it though.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406143_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Huh, really?\nI was able to enjoy it in my own\nway.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406143_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Woah... My ears are ringing...");
            }
        else {
            Voice_PlayVoice("B0406143_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Woah... My ears are ringing...");
            }
        Message_MsgSel("That live was a real pleasure.", "The volume was too loud!", "I wore earplugs during the live, so I'm good.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406143_F00800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, you got that right.\nWe wouldn't have come to the live if\nit wasn't like this.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406143_F00900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Uh-huh, you got that right.\nWe wouldn't have come to the live if\nit wasn't like this.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406143_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "But, if it was too low it wouldn't\nhave an edge, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406143_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It was a rock live, you know!?\nIt'd be meaningless if it wasn't\nloud!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406143_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nUmmm, was there a reason we came to\na live?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Voice_PlayVoice("B0406143_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nYou know, was there a reason we came\nto a live?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406143_F01400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The last one was a ballad...\nIt felt like it ended sadly.");
            }
        else {
            Voice_PlayVoice("B0406143_F01500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The last one was a ballad, I got\nhyped-up on that.\nBut instead, it was sad...");
            }
        Message_MsgSel("Yeah, I think so too.", "However, I liked the song.", "The song's perfect for ｛Amachi＊＊｝.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406143_F01600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Of course, just as I thought it\nwould be!\nBut since we were already so\nhyped-up, I wish it would've stayed\nlike that.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made an good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406143_F01700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Right!\nI wished they could have played a\ncheerful song.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406143_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah. I also like that song.\nBut, I think it wasn't a good time\nto play that song.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406143_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, I like the song.\nBut the timing's bad.\nWhy did they play it on the last\nset...?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406143_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Huh? What do you mean by that?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406143_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hmmm...\nThe point is that you think that I'm\na lonely person.\nI get it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406143_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nI like that song, but it makes me\nfeel bad though...");
                Voice_PlayVoice("B0406143_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nDid Senpai think of me as the lonely\ntype?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406143_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "If so, that's a mistake.\nI'm not lonely, not now....\nNow that I'm with Senpai.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Amachi＊＊｝...");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406143_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, umm!\nI'm sure everyone in Hanegasaki\nacademy gets the idea!\nIn that kind of sense!");
                Voice_PlayVoice("B0406143_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I think it's getting hot in here.\nIt's time to get some air.\nAaah, so hot!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I wonder why\n｛Amachi＊＊｝'s in a\nhurry...)");
                }
            break ;
            }
        }
    }
