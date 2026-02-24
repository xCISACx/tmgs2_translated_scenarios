section "b04_m6_021"{
    int var0 = Date_GetDateOption(2, 1);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_WF210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406021_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "All of the buildings around here\nlook new.");
            }
        else {
            Voice_PlayVoice("B0406021_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It looks redeveloped around here.\nAll of the buildings look new.");
            }
        Message_MsgSel("What a stylish place!", "Is there anything else to do here?", "I'd hate for nature to disappear!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 3);
                Character_BlinkStart(6, 3, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406021_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well!\nIt'll be popular once it's\ncompleted.\nI'm glad I came here with Senpai.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406021_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really? It's really popular here!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406021_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well, this new place is nice.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406021_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, it'll be nice when it's fully\ndone.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406021_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so?\nI think it'll be a beautiful, nice\nbuilding once it's completed...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 0, 11);
                Character_BlinkStart(6, 2, (#1), 1);
                Voice_PlayVoice("B0406021_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Huh, so?\nI'm glad it'll still be beautiful\naround here, not to mention stylish.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406021_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "My stomach's a little empty.\nIs there a stall you can buy\nsomething at?");
            }
        else {
            Voice_PlayVoice("B0406021_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'm feeling hungry.\nHey, is there a stall where I can\nbuy something to eat?");
            }
        Message_MsgSel("I'm feeling hungry, too.", "Okay, it'd be a waste of money, though.", "Thank you!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406021_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Your stomach becomes empty when you\nwalk.\nLet's eat something sweet.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406021_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so?\nYour stomach becomes empty when you\nwalk!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0406021_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Umm... W-Well...\nIt'll be a waste.... I'm sorry.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression.)");
                }
            else {
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406021_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Huh～... I wanted to eat...\nPenny-pincher.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression.)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0406021_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well, I'm sorry...\nBut this little bit of money is all\nI have this month...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0406021_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Huh! This is for me, the junior.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406021_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I see different people walking here.");
            }
        else {
            Voice_PlayVoice("B0406021_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I see there are various people\nwalking here.");
            }
        Message_MsgSel("This place gives off a relaxing feeling.", "It's easy to walk when it isn't crowded.", "I wonder if we're seen as a couple?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406021_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so?\nWell walking here certainly feels\ngood!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406021_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well, is that right?\nIt feels good to walk here!");
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
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 11);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406021_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really?\nI don't think it'd be that great if\nthe place was deserted.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 5);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406021_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hmm, is that so?\nHowever, I don't think it'd be that\ngreat if there was no one here.");
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
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0406021_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "A couple...?\nMaybe they see us as brother and\nsister.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0406021_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "A couple? ... Us?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0406021_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "So you want to be seen like that,\nSenpai?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406021_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well then... Yes.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh? What?");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406021_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It seems you cross arms with each\nother when you're called a couple.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Oh, really... Well then...");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(6, 0, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406021_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Wah! It's a joke!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh, really? I'm sorry.");
                Character_ChFace(0, 0, 11);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406021_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nYou really don't have to cover up\nyour excitement like that...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406021_F02900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Besides, that face...\nYou never understand what I say,\nSenpai...\nHa...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(You seem troubled,\n｛Amachi＊＊｝.)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
