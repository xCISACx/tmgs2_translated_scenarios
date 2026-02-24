section "h3d_m7_000"{
    int var0;
    int var1;
    Background_Bg_GS2("BG_SC700_SU_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetSysParam(0) != 3){
        if (Parameter_GetSysParam(0) == 1){
            var0 = 25;
            var1 = 50;
            }
        else {
            var0 = 60;
            var1 = 120;
            }
        Message_Who(0);
        Message_MsgDisp("主人公", "This is the last day of training\ncamp.");
        if (Parameter_GetBkParam(3, 52) <= var0){
            if (Parameter_GetCh1Param(7, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Character_Chara_GS2(7, "M7_08F", 0);
                Voice_PlayVoice("H3D07000_G00000", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Secluded training in the mountains\nmight be more suited to you than\ntraining camp.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh～, I have to try harder...)");
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Character_Chara_GS2(7, "M7_08F", 0);
                Voice_PlayVoice("H3D07000_G00100", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Perhaps I should have worn wooden\nclogs and carried a bamboo stick\naround to make all of you more\nserious...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh～, I have to try harder...)");
                }
            else {
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Character_Chara_GS2(7, "M7_08F", 0);
                Voice_PlayVoice("H3D07000_G00200", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "It seems like the way I taught you\ndidn't really improve your strength.\nSorry.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh～, I have to try harder...)");
                }
            }
        else if ((Parameter_GetBkParam(3, 52) > var0) && (Parameter_GetBkParam(3, 52) <= var1)){
            if (Parameter_GetCh1Param(7, 130) <= 2){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(7, "M7_08F", 0);
                Voice_PlayVoice("H3D07000_G00300", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "It was your training camp, but I\nnoticed that you've changed, in a\ngood way.\nLet's make the most of our practice.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(7, "M7_08F", 0);
                Voice_PlayVoice("H3D07000_G00400", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "You spent your time better than you\nusually do.\nWithout being negligent, let's work\nharder, little by little.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                }
            else {
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(7, "M7_08F", 0);
                Voice_PlayVoice("H3D07000_G00500", 7, "H3D07000_G00501");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "The time we spent at training camp\nwasn't bad.\n｛主人公｝, let's aim to\nbeat your personal best in the new\nschool semester.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                }
            }
        else if (Parameter_GetBkParam(3, 52) > var1){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(7, "M7_08F", 0);
            if (Parameter_GetCh1Param(7, 130) <= 2){
                Voice_PlayVoice("H3D07000_G00600", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "You changed gears during training\ncamp.\nYou've worked quite hard.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Voice_PlayVoice("H3D07000_G00700", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "You were running at your personal\nbest at camp.\nYou are a hard worker.\nI expect great things from you next\nsemester, too.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            else {
                Voice_PlayVoice("", 7, "H3D07000_G00800");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "You've worked hard,\n｛主人公｝.\nI'm glad that you could run at your\npersonal best.\nYou are the bright star here.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            }
        }
    else if (0){
        Message_Who(0);
        Message_MsgDisp("主人公", "This is the last day of training\ncamp.");
        if (Parameter_GetBkParam(3, 52) <= 60){
            if (Parameter_GetCh1Param(7, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Character_Chara_GS2(7, "M7_08F", 0);
                Voice_PlayVoice("H3D07000_G00000", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Secluded training in the mountains\nmight be more suited to you than\ntraining camp.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh～, I have to try harder...)");
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Character_Chara_GS2(7, "M7_08F", 0);
                Voice_PlayVoice("H3D07000_G00100", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Perhaps I should have worn wooden\nclogs and carried a bamboo stick\naround to make all of you more\nserious...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh～, I have to try harder...)");
                }
            else {
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Character_Chara_GS2(7, "M7_08F", 0);
                Voice_PlayVoice("H3D07000_G00200", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "It seems like the way I taught you\ndidn't really improve your strength.\nSorry.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh～, I have to try harder...)");
                }
            }
        else if ((Parameter_GetBkParam(3, 52) > 60) && (Parameter_GetBkParam(3, 52) <= 120)){
            if (Parameter_GetCh1Param(7, 130) <= 2){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(7, "M7_08F", 0);
                Voice_PlayVoice("H3D07000_G00300", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "It was your training camp, but I\nnoticed that you've changed, in a\ngood way.\nLet's make the most of our practice.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(7, "M7_08F", 0);
                Voice_PlayVoice("H3D07000_G00400", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "You spent your time better than you\nusually do.\nWithout being negligent, let's work\nharder, little by little.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                }
            else {
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(7, "M7_08F", 0);
                Voice_PlayVoice("H3D07000_G00500", 7, "H3D07000_G00501");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "The time we spent at training camp\nwasn't bad.\n｛主人公｝, let's aim to\nbeat your personal best in the new\nschool semester.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                }
            }
        else if (Parameter_GetBkParam(3, 52) > 120){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(7, "M7_08F", 0);
            if (Parameter_GetCh1Param(7, 130) <= 2){
                Voice_PlayVoice("H3D07000_G00600", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "You changed gears during training\ncamp.\nYou've worked quite hard.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Voice_PlayVoice("H3D07000_G00700", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "You were running at your personal\nbest at camp.\nYou are a hard worker.\nI expect great things from you next\nsemester, too.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            else {
                Voice_PlayVoice("", 7, "H3D07000_G00800");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "You've worked hard,\n｛主人公｝.\nI'm glad that you could run at your\npersonal best.\nYou are the bright star here.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            }
        }
    else if (Parameter_GetSysParam(0) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "This is the last day of training\ncamp.");
        if (Parameter_GetBkParam(3, 52) <= 90){
            if (Parameter_GetCh1Param(7, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Character_Chara_GS2(7, "M7_08F", 0);
                Voice_PlayVoice("H3D07000_G00900", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "It's a bit sad to have you graduate\nin this state...\nNext semester is your last chance.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh～, I have to try harder...)");
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Character_Chara_GS2(7, "M7_08F", 0);
                Voice_PlayVoice("H3D07000_G01000", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "As expected, it was a bad thing to\nnot be stern at your last training\ncamp...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh～, I have to try harder...)");
                }
            else {
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Character_Chara_GS2(7, "M7_08F", 0);
                Voice_PlayVoice("", 7, "H3D07000_G01100");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "｛主人公｝....\nAre club activities are burden for\nyou?\nShould I support you?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh～, I have to try harder...)");
                }
            }
        else if ((Parameter_GetBkParam(3, 52) > 90) && (Parameter_GetBkParam(3, 52) <= 180)){
            if (Parameter_GetCh1Param(7, 130) <= 2){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(7, "M7_08F", 0);
                Voice_PlayVoice("H3D07000_G01200", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "You've worked hard, 3rd year\nstudents.\nAs you have a short time left, this\nwill become a good memory for you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(7, "M7_08F", 0);
                Voice_PlayVoice("H3D07000_G01300", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "It was the last training camp, but\nyou are surely glad you came, right?\nYour records are also slightly\nbetter.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                }
            else {
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(7, "M7_08F", 0);
                Voice_PlayVoice("", 7, "H3D07000_G01400");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "You've worked hard,\n｛主人公｝.\nSo it's your last training camp.\nI am glad that you have progressed a\nlittle.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                }
            }
        else if (Parameter_GetBkParam(3, 52) > 180){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(7, "M7_08F", 0);
            if (Parameter_GetCh1Param(7, 130) <= 2){
                Voice_PlayVoice("H3D07000_G01500", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "You've recorded the best times at\nthe last training camp.\nYou've worked quite hard.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Voice_PlayVoice("H3D07000_G01600", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "You've worked hard at this last\ntraining camp.\nYou beat your personal best, it\nseems like this will become a nice\nmemory.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            else {
                Voice_PlayVoice("", 7, "H3D07000_G01700");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "You've worked hard,\n｛主人公｝.\nYou even beat your personal best.\nYou are the Track and Field Club's\nace.");
                Character_ChFace(0, 0, 0);
                Voice_PlayVoice("H3D07000_G01800", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "...\nIt's my last training camp with you.\nIt seems like it will become a good\nmemory for me as well.\nThank you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    Parameter_AddCh1Param(7, 60, 5);
    }
