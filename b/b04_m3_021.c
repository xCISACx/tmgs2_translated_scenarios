section "b04_m3_021"{
    int var0 = Date_GetDateOption(2, 1);
    Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
    Background_Bg_GS2("BG_WF210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Voice_PlayVoice("B0403021_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nThe brick pathway is the boundary\nline between the ocean and the city.\nThey are so different to each other.");
        Message_MsgSel("What a stylish place!", "Is there anything else to do here?", "I'd hate for nature to disappear!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403021_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Because it is not asphalt.\nJust by laying down bricks, I guess\nyou could not say this place is not\nstylish.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403021_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nYou are the type to divide nature\nand man made things?\nI do not think that way.\nIt requires effort to get rid of the\ngap.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403021_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "That is right.\nThis was originally a part of the\nocean.\nI wanted more of its natural state\nto remain.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0403021_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "The bricks have been laid here in a\nmeandering way...");
        Message_MsgSel("It must have been tough working on it.", "Obviously, it's a brick pathway.", "1 brick, 2 bricks, 3 bricks...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403021_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, I did not hear them using a\nmachine to carry the bricks.\nThey must have manually laid it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0403021_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nIt does not seem like you intend on\nfurthering the conversation.\nSorry for talking about something so\nboring.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403021_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Counting like that will take a long\ntime.\nLet us calculate it by the width and\nlength.\nFirst of all, I have to set a\nbasic...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0403021_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "This is a popular place for walking.\nI wonder what everyone is thinking\nas they walk along...");
        Message_MsgSel("Their health, perhaps?", "Surely, the philosophy of life.", "Maybe things like, \"I'm hungry～\"?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403021_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I definitely see some people who\nappear to be so.\nBut I am not classified under that\nparticular category.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403021_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nTo answer in such a way, you must\nalso think about that a lot.\nI am seeing you in a slightly better\nlight.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0403021_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Are you talking about yourself? ...\nIf so, hurry and go home so you can\nprepare a meal or something.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403021_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Eh...? Are you hungry?\nI did not realize.");
                Message_Who(0);
                Message_MsgDisp("主人公", "N-No, I don't mean that...");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403021_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "You do not have to restrain\nyourself.\nI will go and buy juice. Now then...");
                Voice_PlayVoice("B0403021_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "L-Lining up to sit down at a\nbench...\nShould we talk about something\nrelaxing?");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........");
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403021_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I see, that is the general\nopinion...\nSorry, I got caught up in my own\nworld...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝...?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
